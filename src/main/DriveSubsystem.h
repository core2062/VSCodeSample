#pragma once
#include <AHRS.h>
#include <CORERobotLib.h>
#include <WPILib.h>
#include <ctre/Phoenix.h>

enum class DriveSide{LEFT = 1, RIGHT = 2, BOTH = 3};

using namespace CORE;
using namespace frc;

class DriveSubsystem : public CORESubsystem {
public:
    DriveSubsystem();
    void RobotInit() override;
    void TeleopInit() override;
    void Teleop() override;
    void PostLoopTask() override;
    void InitTalons();
    void SetHighGear(bool highGear = true);
    void SetLowGear(bool lowGear = true);
    bool GetHighGear();
    bool GetLowGear();
    void ResetEncoders(DriveSide whichSide);
    double GetDistanceInInches(DriveSide whichSide);
    void SetMotorSpeed(double speedInFraction, DriveSide);
    void SetMotorSpeed(double leftPercent, double rightPercent);
    double GetForwardPower();

    COREConstant<double> driveTurnkP;
private:
    COREConstant<double> m_etherAValue, m_etherBValue, m_etherQuickTurnValue, m_ticksPerInch;
    TalonSRX m_leftMaster, m_rightMaster, m_leftSlave, m_rightSlave;
    DoubleSolenoid m_leftDriveShifter, m_rightDriveShifter;
    bool m_highGear;
    COREConstant<double> m_turnPIDMultiplier;
};