#include <iostream>
#include <cstring>
#include "human.h"

using namespace std;
/*Human :: Human (string _birth_date, unsigned _health_level, int _weight, EyeColor _eye_color, HairColor _hair_color, bool _father, bool _mather, Gender gender) {
	_birth_date = birthDate;
	_gender = gender;
	_eye_color = eyeColor;
	_hair_color = hairColor;
	_father = true;
	_mather = true;
	_weight = weight;
	_health_level = 100;
}
*/
string Human :: speak(string speak_text) {
	return speak_text;
}

void Human :: Walk(int speed, int distance = 0) {
	if (speed <= 10 && speed >= 0) {
		distance += 2;
	} else if(speed > 10 && speed <= 100) {
		distance += 5;
	} else { 
		distance += 10;
	}
} 
int Human :: Eat(Food food, int _calorie, int _weight) {
	if( (food == fruit || food == fish || food == meat) && _health_level < 1000 && _calorie < 10) {
		_health_level ++;
		_weight += 4;
	}
	if (food == fastfood && _health_level >= 0 && _calorie > 10) {
		_health_level --;
		_weight += 6;
	}
	return _weight;
}	 

void Human :: drink(Drink drink) {
	if ( (drink == juice || drink == milk) && _health_level < 1000) {
		_health_level ++;
	}
	if (drink == alcohol && _health_level > 0) {
		_health_level --;
	}
}

	
