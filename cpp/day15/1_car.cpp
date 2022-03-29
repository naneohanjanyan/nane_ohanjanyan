#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
struct information {
	string brand; //marka
	string price; //cena
	int mileage; //vazq
	double engine_power; // moshnost dvigtela
	string transmission; // korobka peredach
	string color;
};

int main () {

struct information info[5];
ifstream file;
file.open("car_info.txt");
string str = "", info_string[6];
int k = 0, j = 0;	
while(!file.eof()){
	file >> str;
	info_string[k] = str;
	//k++;
	if( k == 5 ) {
		info[j].brand = info_string[0].substr(0, info_string[0].size()-1);
		info[j].price = (info_string[1].substr(0, info_string[1].size()-1));
		info[j].mileage =stoi( info_string[2].substr(0, info_string[2].size()-1));
		info[j].engine_power = stod(info_string[3].substr(0, info_string[3].size()-1)); 			
		info[j].transmission = info_string[4].substr(0, info_string[4].size()-1);
		info[j].color = info_string[5];
		j++;
		k = -1;
	}
	k++;
}
file.close();
cout << " Input search mode (brand/price/transmission/color): "; 
string mode = "";
cin >> mode;
cout << " Input data: ";
string data;
cin >> data;
if( mode == "brand") {
	for (int i = 0; i < 6; i++) {
		if (info[i].brand == data) {
			cout << " Brand: " << info[i].brand << endl;
			cout << " Price: " << info[i].price << endl;
			cout << " Mileage: " << info[i].mileage << endl;
			cout << " Engine power: " << info[i].engine_power << endl;
			cout << " Transmission: " << info[i].transmission << endl;
			cout << " Color: " << info[i].color << endl;
			cout << "=================================================================\n";
		}
	}
} else if (mode == "price") {
	for (int i = 0; i < 6; i++) {
		if (info[i].price == data) {
			cout << " Brand: " << info[i].brand << endl;
			cout << " Price: " << info[i].price << endl;
			cout << " Mileage: " << info[i].mileage << endl;
			cout << " Engine power: " << info[i].engine_power << endl;
			cout << " Transmission: " << info[i].transmission << endl;
			cout << " Color: " << info[i].color << endl;
			cout << "=================================================================\n";
		}
	}
} else if (mode == "transmission") {
	for (int i = 0; i < 6; i++) {
		if (info[i].transmission == data) {
			cout << " Brand: " << info[i].brand << endl;
			cout << " Price: " << info[i].price << endl;
			cout << " Mileage: " << info[i].mileage << endl;
			cout << " Engine power: " << info[i].engine_power << endl;
			cout << " Transmission: " << info[i].transmission << endl;
			cout << " Color: " << info[i].color << endl;
			cout << "=================================================================\n";
		}
	}
} else if (mode == "color") {
	for (int i = 0; i < 6; i++) {
		if (info[i].color == data) {
			cout << " Brand: " << info[i].brand << endl;
			cout << " Price: " << info[i].price << endl;
			cout << " Mileage: " << info[i].mileage << endl;
			cout << " Engine power: " << info[i].engine_power << endl;
			cout << " Transmission: " << info[i].transmission << endl;
			cout << " Color: " << info[i].color << endl;
			cout << "=================================================================\n";
		}
	}
} else { 
	cout << " It's not search mode, input search mode: ";
}	
		    




return 0;

}
