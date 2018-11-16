// #pragma once

// #include <iostream>
// #include "ctre/Phoenix.h"

// struct VelocityPair{
// 	double left;
// 	double right;
// 	VelocityPair(double l, double r);
// };

// class Ether {
//     public:
// 		Ether(TalonSRX* leftMotor1, TalonSRX* leftMotor2,
// 				TalonSRX* rightMotor1, TalonSRX* rightMotor2, double a, double b,
// 				double quickTurn);
// 		static void setAB(double a, double b);
// 		static void setQuickturn(double q);
//         void update();
// 		static VelocityPair calculate(double mag, double rot, double deadband = .1);
// 	private:
// 		TalonSRX * m_leftMotor1, *m_leftMotor2, *m_rightMotor1, *m_rightMotor2;
// 		double static etherL(double fwd, double rcw, double a, double b);
// 		double static etherR(double fwd, double rcw, double a, double b);
// 		double m_left = 0.0, m_right = 0.0;
// 		static double m_a, m_b, m_quickTurn;
// };
