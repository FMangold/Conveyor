#include "IdleState.hpp"
#include "../Context.hpp"
#include <unistd.h>


void IdleState::startTransportingGoF(void){
	IMotor* myMotor = myContext->getMotor();
	// Start the motor and set the alarm clock to 10 sec to stop it again
	myMotor->start();
    alarm(10);
	myContext->setState(myContext->getTransportingState());
}
