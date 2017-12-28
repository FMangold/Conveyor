#pragma once
#include "StatePattern/IState.hpp"
#include "StatePattern/TransportingState.hpp"
#include "StatePattern/IdleState.hpp"
#include "Motor/LegoMotor.h"



class Context{
public:
	Context(){wiringPiSetup(); this->currentState = &this->myIdleState;}
	TransportingState* getTransportingState(void){return &this->myTransportState;}
	IdleState* getIdleState(void){return &this->myIdleState;}
	void setState(IState* state){this->currentState = state;}
	void startTransporting(void){this->currentState->startTransportingGoF();}
	void stopTransporting(void){this->currentState->stopTransportingGoF();}
	IMotor* getMotor (void){return  &this->Motor;}

private:
	LegoMotor Motor;
	IState* currentState;

	IdleState myIdleState = IdleState(this);
	TransportingState myTransportState = TransportingState(this);
};
