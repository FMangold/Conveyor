#pragma once

#include <wiringPi.h>
#include "Sensor.h"

#define BUTTON_PIN 27

typedef void (*CallBackFunction)();

class LightBarrier : public ISensor
{
public:
	LightBarrier(CallBackFunction aCallbackFunction){
		wiringPiSetup(); // no return value - System fault on error
		myCallbackFunction = aCallbackFunction;
		wiringPiISR (BUTTON_PIN, INT_EDGE_BOTH, myCallbackFunction);
	}
	int initialize(void){return 0;}
	void connectVoidPtrCallback(CallBackFunction myCallbackFunction)	{
		wiringPiISR (BUTTON_PIN, INT_EDGE_BOTH, myCallbackFunction);
	}
private:
	CallBackFunction myCallbackFunction;
};
