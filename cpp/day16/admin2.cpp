#include <iostream>
#include <fstream>
using namespace std;

int main() {
string country;
string city;
string address;
string hotelname;
int star;
int singlRoom;
int twinRoom;
int trplRoom;
bool spa;
bool fitnes;

loop:
int size = 10;
string info[size];
cout << " Country: ";
getline(cin,info[0]);
cout << " City: ";
getline(cin,info[1]);
cout << " Address: ";
getline(cin,info[2]);
cout << " Hotel name: ";
getline(cin, info[3]);
cout << " Star: ";
cin >> info[4];
cout << " Singl room: ";
cin >> info[5];
cout << " Twin room: ";
cin >> info[6];
cout << " Triple room: ";
cin >> info[7];
cout << " Spa ( 1 or 0 ): ";
cin >> info[9];
cout << " Fitnes ( 1 or 0 ): ";
cin >> info[9]; 

fstream hotel;
hotel.open("hotel2.txt");
if(hotel.is_open()) {
	for (int i = 0; i < size; i++) {
		if( i != size - 1) {
			hotel << info[i] << ", ";
		} else if ( i == size - 1 ) {
			hotel << info[i];
		}
		hotel << "\n";
	}
}
hotel.close();


string command;
cout << "Exit  or Countinue";
cin >> command;
if(command == "Countinue") {
	goto loop;
}

return 0;

}


