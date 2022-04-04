#include <iostream>
#include <fstream>
using namespace std;

int indexCount();

int main() {

loop:
int size = 13;
string info[size];
cout << " Country:               ";
getline(cin,info[0]);
cout << " City:                  ";
getline(cin,info[1]);
cout << " Address:               ";
getline(cin,info[2]);
cout << " Hotel name:            ";
getline(cin, info[3]);
cout << " Star:                  ";
cin >> info[4];
cout << " Singl room:            ";
cin >> info[5];
cout << " Price Singl room:      ";
cin >> info[6];
cout << " Twin room:             ";
cin >> info[7];
cout << " Price Twin room:       ";
cin  >> info[8];
cout << " Triple room:           ";
cin >> info[9];
cout << " Price Triple room:     ";
cin  >> info[10];
cout << " Spa ( yes or not ):    ";
cin >> info[11];
cout << " Fitnes ( yes or not ): ";
cin >> info[12];
int index = indexCount() + 1; 
fstream hotel;
hotel.open("hotel.txt", fstream::in | fstream::out | fstream::app );
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

int command;
cout << "Exit(0) or Continue(1): ";
cin >> command;
if(command == 1) {
	cin.ignore();
	goto loop;
}

return 0;

}


int indexCount() {
	int index = 0;
	ifstream f;
	f.open("hotel.txt");
	string str = "";
	while( getline(f, str) ){
		index++;
	}
	f.close();
	return index;
}


