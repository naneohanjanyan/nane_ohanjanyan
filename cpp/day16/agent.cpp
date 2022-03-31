#include <iostream>
#include <fstream>
#include <string>
#include "agent.h"
using namespace std;

struct information {
	string country;       //1
	string city;          //2
	string name;          //3
	int star;             //4
	int num_room;         //5
//	int seat_room;        //6 How many seats is room
//	int price_room;       //7
	string swimming_pool; //8 yes or no
	string gym;           // 9 sportzal
};

void agent () {

cout << "\n If you do not add this filter write \' - \' \n\n";
cout << " Filters: 1.country, 2.city, 3.name, 4.number of hotel stars, 5.room number, (how many seats is room,) (price of room,)                                6.swimming pool(yes or no), 7.gym (yes or no)\n";

string command = "add";
int struct_size = 7;
string added[struct_size];
while(command == "add") {
	for ( int i = 0; i < struct_size; i++) {
		//if( i != 6) {
		cout << " " << i + 1 << ". ";
		cin >> added[i];
		//}
	}

	int size = stoi(added[4]);
	int seat_room[size], price_room[size];
	cout << " Input how many seats is rooms and price: \n";
	int roomNumber = 0;
	for(int j = 0; j < size; j++, roomNumber++) {
		cout << " Room number " << roomNumber + 1 << ".  seat: ";
		cin >> seat_room[j]; 
		cout << "		 Price: "; 
		cin >> price_room[j];
	}
	fstream seat_price;
	seat_price.open("seat-priceroom.txt");
	if ( seat_price.is_open() ) {
		for(int i = 0; i < size; i++) {
			seat_price << seat_room[i] << " " << price_room[i];
		}
	}
	seat_price.close();

	fstream file;
	file.open("hotels.txt");
	if(file.is_open()){
		for(int i = 0; i < struct_size; i++) {
			if( i == struct_size - 1) {
				file << added[i];
			} else {
				file <<  added[i] << ", " ;
			}
		}
		file << "\n";
	file.close();
	}

	cout << " Continnue adding or exit ";
	cin >> command;
	if(command == "exit") {
		 break;
	} else if( command != "add" && command != "exit" ) {
		cout << " Is not command, input add or exit: ";
		cin >> command;
	}		

} 

}
