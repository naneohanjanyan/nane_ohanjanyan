#include <iostream>
#include <fstream>
using namespace std;

int indexCount();

int main() {
/*
string country;
string city;
string address;
string hotelname;
int star;
int singlRoom;
int twinRoom;
int trplRoom;
int price1;
int price2;
int price3;
bool spa;
bool fitnes;
*/
loop:
int size = 13;
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
cout << "Price Singl room: ";
cin >> info[6];
cout << " Twin room: ";
cin >> info[7];
cout << "Price Twin room: ";
cin  >> info[8];
cout << " Triple room: ";
cin >> info[9];
cout << "Price Triple room: ";
cin  >> info[10];
cout << " Spa ( yes or not ): ";
cin >> info[11];
cout << " Fitnes ( yes or not ): ";
cin >> info[12];
int index = indexCount() + 1; 
cout << 0 << endl;
fstream hotel;
hotel.open("hotel2.txt", fstream::in | fstream::out | fstream::app );
if(hotel.is_open()) {
	hotel << index << ". ";
	for (int i = 0; i < size; i++) {
		if( i != size - 1) {
			hotel << info[i] << ", ";
		} 
		if ( i == size - 1 ) {
			hotel << info[i];
		}
	}
}
hotel << "\n";
hotel.close();


string command;
cout << "Exit  or Countinue: ";
cin >> command;
if(command == "Countinue") {
	cin.ignore();
	goto loop;
}

return 0;

}


int indexCount() {
  int index = 0;
ifstream f;
 f.open("hotel2.txt");
string str = "";
  while( getline(f, str) ){
    index++;
    cout << 1 << " " ;
  }
f.close();

  return index;
}


