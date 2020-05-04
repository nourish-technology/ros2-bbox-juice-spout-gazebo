#include <gazebo/common/Time.hh>
#include <gazebo/physics/Model.hh>
#include <gazebo/physics/World.hh>
#include <gazebo_ros/conversions/builtin_interfaces.hpp>
#include <gazebo_ros/node.hpp>
#include <sdf/sdf.hh>

#include <gazebo/common/Plugin.hh>
#include <gazebo/rendering/rendering.hh>
#include <ignition/math/Color.hh>

#include <geometry_msgs/msg/twist.hpp>
#include <std_msgs/msg/bool.hpp>

#include <memory>
#include <string>
#include <vector>
#include <mutex>
#include <typeinfo>

#include <juice_spout_color.hpp>

#ifdef NO_ERROR
// NO_ERROR is a macro defined in Windows that's used as an enum in tf2
#undef NO_ERROR
#endif



namespace gazebo_plugins
{
class GazeboColorPrivate
{
    public:
        /// Callback to be called at every simulation iteration.
        /// \param[in] _info Updated simulation info.
        void OnUpdate();//const gazebo::common::UpdateInfo & _info);

        /// A pointer to the GazeboROS node.
        gazebo_ros::Node::SharedPtr ros_node_;

        /// Connection to event called at every world iteration.
        gazebo::event::ConnectionPtr update_connection_;

        /// Protect variables accessed on callbacks.
        std::mutex lock_;

        /// Update period in seconds.
        double update_period_;

        /// Last update time.
        gazebo::common::Time last_update_time_;

        /// Pointer to model.
        gazebo::rendering::VisualPtr model_;

        // track published state
        bool target_moving_state_;

        // track rendered state 
        bool rendered_moving_state_;

        /// Subscriber to moving topic
        rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr moving_sub_;

        //Topic update method
        void OnMoving(const std_msgs::msg::Bool::SharedPtr _msg);

        std::mutex mutex_;
};


GazeboColor::GazeboColor()
: impl_(std::make_unique<GazeboColorPrivate>())
{
}

GazeboColor::~GazeboColor()
{
}

void GazeboColor::Reset()
{
}

void GazeboColor::Load(gazebo::rendering::VisualPtr _model, sdf::ElementPtr _sdf)
{
    impl_->model_ = _model;

    // Initialize ROS node
    impl_->ros_node_ = gazebo_ros::Node::Get(_sdf);

    // Update rate
    impl_->update_period_ = 1.0;

    impl_->last_update_time_ = gazebo::common::Time::GetWallTime();

    // initialize moving state
    impl_ ->target_moving_state_ = false;
    impl_ ->rendered_moving_state_ = true;

    impl_->moving_sub_ = impl_->ros_node_->create_subscription<std_msgs::msg::Bool>(
        "/spout/is_running_recipe", rclcpp::QoS(rclcpp::KeepLast(1)),
        std::bind(&GazeboColorPrivate::OnMoving, impl_.get(), std::placeholders::_1));

    RCLCPP_INFO(impl_->ros_node_->get_logger(), "Subscribed to [%s]  blah blah",
        impl_->moving_sub_->get_topic_name());

    // Listen to the update event (broadcast every simulation iteration)
    impl_->update_connection_ = gazebo::event::Events::ConnectPreRender(
        std::bind(&GazeboColorPrivate::OnUpdate, impl_.get()));

    RCLCPP_INFO(impl_->ros_node_->get_logger(), "Loaded visual plugin.");

}

void GazeboColorPrivate::OnMoving(const std_msgs::msg::Bool::SharedPtr _msg)
{
  std::lock_guard<std::mutex> scoped_lock(mutex_);
  target_moving_state_ = _msg->data;
}

void GazeboColorPrivate::OnUpdate()
{

    std::lock_guard<std::mutex> scoped_lock(mutex_);

    if (!model_) {
        RCLCPP_INFO(ros_node_->get_logger(), "No model!");
    }	

    if (target_moving_state_ == true) {
        RCLCPP_INFO(ros_node_->get_logger(), "Updating visual plugin.");
        
        ignition::math::Color c = ignition::math::Color(0, 0, 1.0, 1.0);

        c = ignition::math::Color(1.0, 0, 0, 1.0);
        
        model_->SetAmbient(c);
        model_->SetDiffuse(c);
        model_->Update();
        last_update_time_ = gazebo::common::Time::GetWallTime();
        target_moving_state_ = false;
    } else {
        ignition::math::Color c = ignition::math::Color(0, 0, 1.0, 1.0);
        
        model_->SetAmbient(c);
        model_->SetDiffuse(c);
        model_->Update();
        last_update_time_ = gazebo::common::Time::GetWallTime();
        target_moving_state_ = false;
    }
}


GZ_REGISTER_VISUAL_PLUGIN(GazeboColor)
}  // namespace gazebo_plugins
