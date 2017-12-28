#pragma once

class Context;	// Necessary forward declaration

// Pure virtual abstract class == Interface
class IState{
public:
	IState(Context* aContext):myContext(aContext){}
	virtual void startTransportingGoF(void) = 0;
	virtual void stopTransportingGoF(void) = 0;
	virtual ~IState(){}
protected:
	Context* myContext;	// Context Object to set new states
};


