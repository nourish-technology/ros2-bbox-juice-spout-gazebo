#ifndef GAZEBO_PLUGINS__GAZEBO_ROS_DIFF_DRIVE_HPP_
#define GAZEBO_PLUGINS__GAZEBO_ROS_DIFF_DRIVE_HPP_

#include <gazebo/common/Plugin.hh>

#include <memory>

namespace gazebo_plugins
{
class GazeboColorPrivate;

class GazeboColor : public gazebo::VisualPlugin
{
public:
  /// Constructor
  GazeboColor();

  /// Destructor
  ~GazeboColor();

protected:
  // Documentation inherited
  void Load(gazebo::rendering::VisualPtr _model, sdf::ElementPtr _sdf) override;

  // Documentation inherited
  void Reset() override;

private:
  /// Private data pointer
  std::unique_ptr<GazeboColorPrivate> impl_;
};
}  // namespace gazebo_plugins

#endif  // GAZEBO_PLUGINS__GAZEBO_ROS_DIFF_DRIVE_HPP_
