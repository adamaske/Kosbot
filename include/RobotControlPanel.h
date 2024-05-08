#pragma once

#include "GUIWindow.h"
#include "Robot.h"
#include <memory>

class RobotControlPanel : public GUIWindow {
public:

	int Render() override;

	void SetRobot(std::shared_ptr<Robot> _robot);

	std::shared_ptr<Robot> robot;
};