#pragma once			// Include Guard
#include "Motor.h"

class TestMotor : public IMotor{
public:
	TestMotor (){isMotorRunning=4711;}
	void start(void){isMotorRunning=1;}
	virtual void stopp(void){isMotorRunning=0;}
	int getMotorRunning(void){return isMotorRunning;}
private:
	int isMotorRunning;
};


