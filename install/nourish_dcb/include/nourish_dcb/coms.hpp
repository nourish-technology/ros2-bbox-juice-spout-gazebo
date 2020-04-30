/*!
 * DCB coms by Scott Lessans
 * TODO add license and other info lol
 */

#pragma once

#include <string>
#include "serial/serial.h"

namespace nourish { 
namespace dcb {

    typedef enum {
        command_exception_reason_unknown = 0,

        // device reported an error with the command itself, this typically means
        // it was malformed or bad arguments.
        command_exception_reason_cmd_error,
        
        // an error occurred while parsing the response from the board
        command_exception_reason_response_error,
        
        // device reoprted command is not implemented
        command_exception_reason_not_implemented,

        // command was rejected because device was busy 
        // processing another async request
        command_exception_reason_busy,

        // a read command was issued and no data was available to read
        command_exception_reason_no_data
    } command_exception_reason_t;

    /*!
    * Class that provides a portable interface to interacting with a DCB.
    */
    class DCBComs {
    public:
        explicit DCBComs();
        virtual ~DCBComs();

        // Disable copy constructors
        DCBComs(const DCBComs&) = delete;
        DCBComs& operator=(const DCBComs&) = delete;

        /*! Gets the connected status of the board
         * 
         * Board is considered connected if udnerlying port is open and we can communicaate
         * with it.
         *
         * \return Returns true if the underlying port is open, and we are considered "connected".
         */
        bool isConnected () const;

        /*! Sets the serial port identifier
         *
         * \param port A const std::string reference containing the address of the
         * serial port, which would be something like 'COM1' on Windows and
         * '/dev/ttyS0' on Linux.
         * 
         * If was open before, will close and try to reconnect after setting port.
         *
         * \throw std::invalid_argument
         */
        void setPort (const std::string &port);

        /*! Gets the serial port identifier
         */
        std::string getPort () const;

        /*! Closes the serial port. */
        virtual void close ();

        /*!
         * Opens the serial port as long as the port is set and the port isn't
         * already open.
         *
         * If the port is provided to the constructor then an explicit call to open
         * is not needed.
         * 
         * Note while this doesn't throw CommandException directly, it is not uncommon
         * for subclasses to override open and send some initialiation commands once open.
         * So this may throw commands exceptions in that case. Subclasses should make sure
         * to close the connection if their commands fail.
         *
         * \see Serial::Serial
         *
         * \throw std::invalid_argument
         * \throw serial::SerialException
         * \throw serial::IOException
         * \throw nourish::dcb::CommandException
         */
        virtual void open ();

    protected:
        serial::Serial serial_;
    
        /*!
         * Send a command to the board and wait for a response. The response
         * will be stripped of the delimiter. If the response is a standard error
         * response, an exception will be thrown.
         * 
         * \return A std::string with the reponse text, line delimiter removed.
         * 
         * \throw nourish::dcb::CommandException
         * \throw serial::PortNotOpenedException
         * \throw serial::SerialException
         * \throw serial::IOException
         */
        std::string run_cmd (const std::string &cmd);

        /**
         * Send a set command to the board.
         * 
         * \param cmd the full command including arguments to send to the board
         * 
         * \throw nourish::dcb::CommandException
         * \throw serial::PortNotOpenedException
         * \throw serial::SerialException
         * \throw serial::IOException
         */
        void run_set (const std::string &cmd);

        /**
         * See run_set. For now this is an alias, but in the future
         * run set may be changed to accept arguments
         */
        void run_do (const std::string &cmd);

        /**
         * Run a read command. The function will handle parsing response
         * and removing command prefix.
         * 
         * example run_read("CMD") will send CMD? and if response is CMD=4,5 it will
         * return "4,5"
         * 
         * \param cmd the base command to send (no ?)
         * \return response body
         * 
         * \throw nourish::dcb::CommandException
         * \throw serial::PortNotOpenedException
         * \throw serial::SerialException
         * \throw serial::IOException
         */
        std::string run_read (const std::string &cmd);

        /**
         * Run a read command that returns a single float. See run_read for args/exceptions
         */
        float run_read_float (const std::string &cmd);

        /**
         * Check if the device is busy
         * 
         * \return A bool, true if busy, false if not
         * 
         * \throw nourish::dcb::CommandException
         * \throw serial::PortNotOpenedException
         * \throw serial::SerialException
         * \throw serial::IOException
         * 
         */
        bool check_busy();

    };

    class CommandException: public std::exception
    {
    public:
        // Disable copy constructors
        CommandException& operator=(const CommandException&) = delete;

        CommandException (const std::string &cmd, command_exception_reason_t reason, const std::string &description = "");
        CommandException (const CommandException& other);
        virtual ~CommandException() throw();

        virtual const char* what () const throw ();
        command_exception_reason_t reason () const throw ();
        std::string cmd () const throw ();

    private:
        std::string e_what_;
        std::string cmd_;
        command_exception_reason_t reason_;
    };

}
}
