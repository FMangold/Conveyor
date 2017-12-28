#include <iostream>
using namespace std;

class TestSensor : public ISensor{
public:
	virtual int initialize(void){
		SensorCount=0;
		return true;
	}
	int getSensorCount(void){return SensorCount;}
	void testSensing(void) {SensorCount++;}
private:
	int SensorCount;
};

