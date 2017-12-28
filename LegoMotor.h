#pragma once			// Include Guard

#include <wiringPi.h>		// Needed for digitalWrite
#include "Motor.h"
#define GPIO_PIN 1			// Motor wired to this GPIO
#define GPIO_PIN_BACK 2		// Motor wired to this GPIO
class LegoMotor : public IMotor{
public:
	LegoMotor (){};
	void start(void){digitalWrite(GPIO_PIN, HIGH);}
	void stop(void){digitalWrite(GPIO_PIN, LOW);digitalWrite(GPIO_PIN_BACK, LOW);}
	void back(void){digitalWrite(GPIO_PIN_BACK, LOW);}
};
