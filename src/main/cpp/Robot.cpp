
#include "Robot.h"
#include <COREDrive/COREEtherDrive.h>

#include <iostream>

#include <SmartDashboard/SmartDashboard.h>
Robot::Robot() :
  m_rightFront(RIGHT_FRONT_PORT),
  m_rightBack(RIGHT_BACK_PORT),
  m_leftFront(LEFT_FRONT_PORT),
  m_leftBack(LEFT_BACK_PORT),
  m_etherAValue("Ether A Value", 0.6),
  m_etherBValue("Ether B Value", 0.4),
  joystick(0) {
  
}
void Robot::RobotInit() {

}

void Robot::RobotPeriodic() {

}

void Robot::AutonomousInit() {

}

void Robot::AutonomousPeriodic() {

}

void Robot::TeleopInit() {

}

void Robot::TeleopPeriodic() {
  m_leftStickValue = joystick.GetRawAxis(1);
  m_rightStickValue = joystick.GetRawAxis(5);
  m_rightFront.Set(ControlMode::PercentOutput, -m_leftStickValue);
  m_rightBack.Set(ControlMode::PercentOutput, -m_leftStickValue);
  m_leftFront.Set(ControlMode::PercentOutput, m_rightStickValue);
  m_leftBack.Set(ControlMode::PercentOutput, m_rightStickValue);
}

void Robot::TestPeriodic() {

}

#ifndef RUNNING_FRC_TESTS
START_ROBOT_CLASS(Robot)
#endif
