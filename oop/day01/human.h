#include <string>
using namespace std;
#ifndef Human_H
#define Human_H

class Human {
	enum Drink {
		juice,
		alcohol,
		coffee,
		milk,
		water,
	};
	enum Food {
		fruit,
		fastfood,
		fish,
		meat
	};
	enum EyeColor {
		black_,
		blue_,
		green_,
		brow_,
		grey_
	};
	enum HairColor {
		black,
		white,
		red,
		ginger,
		gray
	};
	enum Gender {
		male,
		female
	};
	private:
		string _birth_date; 
		unsigned _health_level;
		int _weight;
		EyeColor _eye_color;
		HairColor _hair_color;
		bool _father;
		bool _mather;
		Gender gender;
	public:
		Human(string _birth_date, 
			unsigned _health_level,
			int _weight,
			EyeColor _eye_color,
			HairColor _hair_color,
			bool _father,
			bool _mather,
			Gender gender);
		
		int _distance;
		int _speed;
		int _calorie;
		string speak(string speak_text);
		void Walk(int speed, int distance);
		int Eat(Food food, int _calorie, int _weight);
		void drink(Drink drink);
		string getBirthDate();
		void setBirthDate();
		EyeColor getEyeColor();
		void setEyeColor();
		HairColor getHairColor();
		void setHairColor();
		Gender getGenfer(); 


};

#endif
