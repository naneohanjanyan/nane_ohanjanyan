#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>

class Computer {
private:
	int _ram;
	int _cpu;
	int _rom;
	string _os;
	double _screen;
	bool _mouse;
	bool _speakers;
	bool _video_card;
	int _price;
	string _rom_type;
	bool _keyboard;
	bool _power_on;
	string _copmuter_type;
public:
	Computer(){
		_mouse = true;
		_speakers = false;
		_video_card = true;
	}
	Computer(int rom, int ram, int cpu){
		_rom = rom;
		_ram = ram;
		_cpu = cpu;
	}
	void state(bool state){
		_power_on = state;
	}
	void Restart();
	void PrintDoucument();
	void PlayGame();
	
	
};

#endif
