#pragma once

#include "IState.hpp"

class IdleState: public IState{
public:
	IdleState(Context* aContext):IState(aContext){}
	virtual void startTransportingGoF(void);
	virtual void stopTransportingGoF(void){}//Nullobject
};
