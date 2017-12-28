#pragma once			// Include Guard

class IMotor{
public:
	virtual void start(void) = 0;
	virtual void stop(void) = 0;
	virtual void back(void) = 0;
	virtual ~IMotor(){};
};
