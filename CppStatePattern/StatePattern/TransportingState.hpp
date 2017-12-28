#pragma once

#include "IState.hpp"

class TransportingState: public IState{
public:
	TransportingState(Context* aContext):IState(aContext){}
	virtual void startTransportingGoF(void){}//Nullobject
	virtual void stopTransportingGoF(void);
};
