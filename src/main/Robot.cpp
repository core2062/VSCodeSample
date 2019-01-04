
#include <Robot.h>

#include <iostream>

#include <SmartDashboard/SmartDashboard.h>
Robot::Robot() {
    m_instance = this;
}

void Robot::Teleop() {
    double left = -driverJoystick->GetAxis(CORE::COREJoystick::JoystickAxis::LEFT_STICK_Y);
	double right = -driverJoystick->GetAxis(CORE::COREJoystick::JoystickAxis::RIGHT_STICK_Y);

	driveSubsystem.SetMotorSpeed(left, right);
}

void Robot::RobotInit() {

}

void Robot::TeleopInit() {
    
}

void Robot::Test() {

}

void Robot::TestInit() {
  
}

Robot* Robot::GetInstance() {
	if(!m_instance) {
		CORELog::logError("Get instance returning null pointer!");
	}
	return m_instance;
}

START_ROBOT_CLASS(Robot)