#include <iostream>
#include "Config.h"

#include "Robot.h"
#include "RobotControlPanel.h"

#include "Logger.h"

#include "Networking.h"
#include "Server.h"

#include "Graphics.h"

int main(int argc, char argv[]){
    Logger::Initalize(Logger::L_INFO, Logger::L_CONSOLE);
    Networking::Intialize();

    Logger::Info("Kosbot VERSION " + std::to_string(Kosbot_VERSION_MAJOR)+ "." + std::to_string(Kosbot_VERSION_MINOR));

    //Create robot and control panel
    std::shared_ptr<Robot> robot = std::make_shared<Robot>();
    std::shared_ptr<RobotControlPanel> robot_control_panel = std::make_shared<RobotControlPanel>();
    robot_control_panel->SetRobot(robot);

    Graphics graphics;
    graphics.Init("Kosbot");
    graphics.AppendGUIWindow(robot_control_panel);

    int result = 1;
    while (result) {

        result = graphics.Frame();
    }
    //Create server
    //Server kosbot_server;
    //kosbot_server.RegisterParserCallback();
    //Run

    Networking::Shutdown();
    
    return 1;
}