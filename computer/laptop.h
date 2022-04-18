#ifndef laptop
#define laptop

class Laptop : Computer {
privet:
	
	int _power;
	int _power_time;
public:
	void setPower(int power, int power_time){
		_power = power;
		_power_time = power_time;
	}
	int getPower(){
		return _power;
	}
	int getPowerTime() {
		return _power_time;
	}
	
};
#endif
