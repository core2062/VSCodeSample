
#pragma once

#include <string>

#include <IterativeRobot.h>
#include <SmartDashboard/SendableChooser.h>
#include <ctre/Phoenix.h>
#include <Joystick.h>
#include <CORERobotLib.h>

#define RIGHT_FRONT_PORT 10
#define RIGHT_BACK_PORT 11
#define LEFT_FRONT_PORT 12
#define LEFT_BACK_PORT 13
class Robot : public frc::IterativeRobot {
 public:
  Robot();
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;

 private:
  Joystick joystick;  
  COREConstant <double> m_etherValueA, m_etherValueB;
  TalonSRX m_rightFront, m_rightBack, m_leftFront, m_leftBack;
  double m_leftStickValue, m_rightStickValue;
};
