
#include <Robot.h>

#include <iostream>

#include <SmartDashboard/SmartDashboard.h>
Robot::Robot() : driveSubsystem() {
  
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

START_ROBOT_CLASS(Robot)