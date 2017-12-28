#include "StatePattern/IState.hpp"
#include "Motor/LegoMotor.h"
#include "Context.hpp"

#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include "Sensor/LightBarrier.h"

static Context myContext;

// Light barrier -> start transporting
void handleLightSensor(void){
	myContext.startTransporting();
}

// Alarm clock -> stop transporting
void handleTimeout( int sig ) {
	myContext.stopTransporting();
}

int main(void){
	// Initialize a light barrier sensor
	LightBarrier mySensor(&handleLightSensor);

	// Initialize the OS' alarm signal handling
	signal(SIGALRM, handleTimeout);
	alarm(1);

	// Welcome screen ...
	printf ("State Pattern -- Build Time %s\n", __TIME__);

	while (1){
		sleep(10000);
	}
}//int main(void)

