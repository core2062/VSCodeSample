
#include <Robot.h>

#include <iostream>

#include <SmartDashboard/SmartDashboard.h>
Robot::Robot() : driveSubsystem() {
  
}

// void Robot::Teleop() {

// }

// void Robot::RobotInit() {

// }

// void Robot::TeleopInit() {
    
// }
void Robot::RobotPeriodic() {

}
void Robot::DisabledInit() {

}
void Robot::DisabledPeriodic() {
  
}
void Robot::AutonomousInit() {

}
void Robot::AutonomousPeriodic() {

}
void Robot::TeleopInit(){
  
}
void Robot::TeleopPeriodic() {
    double left = -driverJoystick->GetAxis(CORE::COREJoystick::JoystickAxis::LEFT_STICK_Y);
	double right = -driverJoystick->GetAxis(CORE::COREJoystick::JoystickAxis::RIGHT_STICK_Y);

	driveSubsystem.SetMotorSpeed(left, right);
}
void Robot::TestInit() {
  
}
void Robot::TestPeriodic() {

}
void Robot::Teleop() {

}
START_ROBOT_CLASS(Robot)