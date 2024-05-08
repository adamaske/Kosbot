#include "Robot.h"
#include "Logger.h"

Robot::Robot()
{
	Logger::Info("Robot Constructed");
}

Robot::~Robot()
{
	Logger::Info("Robot Deconstructed");
}
