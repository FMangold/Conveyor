#include "TransportingState.hpp"
#include "../Context.hpp"
#include <stdio.h>

void TransportingState::stopTransportingGoF(void){
	printf ("Stop Transporting\n");
	IMotor* myMotor = myContext->getMotor();
	myMotor->stop();
	myContext->setState(myContext->getIdleState());
}

