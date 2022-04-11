#include <iostream>
#include <cstring>
#include "human.h"

using namespace std;

class Human {
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
		string birth_date() {
			int day, month, year;
			cout << "Enter birthday: ";
			cin >> day;
			cout << "Enter month of birth: ";
			cin >> month;
			cout << " Enter year of birth: ";
			cin >> year;
			string BirthDate = to_string(day) + "_" + to_string(month) + "_" + to_string(year);
			return BirthDate;
		}
		int health_level;
		EyeColor eye_color;
		HairColor hair_color;
		bool father;
		bool mather;
		Gender gender;
		
	public:
		char *speak();
		void Walk();
		bool Eat(bool raw) {
			if(raw) {
				health_level++;
				return true;
			} else {
				return false;
			}
			return 0;
		}
		bool Drink(string drink);

};

class HomoSapience : Human {
	enum Religion {
		Christianity,
		Islam,
		Hinduism,
 		Buddhism
	};
	enum Nationality {
		armenian,
		russian,
		greek,
		american,
		british
	};

	private:
		string name;
		string surname;
		string address(string city, string street);
		Nationality nationality;
		Religion religion;
		void Think() {
		string think;
		bool command;
		do {
			getline(cin, think);
			cout << " Coutinue think (1/0)?";
			cin >> command;
		} while(command);
	}
};

class Programmer : HomoSapience{
	private:
		bool Logical_Thinking;
		bool Attentiveness;
		bool Responsibility;
		bool Imagination;
		void WriteCode() {
			string code;
			cout << " Write your code:\n ";
			getline(cin, code);
		}
	
};

		
		
