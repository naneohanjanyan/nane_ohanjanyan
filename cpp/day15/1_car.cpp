#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
struct information {
	string brand;
	string model;
	int price;
	int mileage;
	double engine_power;
	string transmission;
	string color;
};

void print (information info);
int main () {

struct information info[10];
ifstream file;
file.open("car_info.txt");
string str = "", info_string[10];
int k = 0, j = 0;
// add file in struct
while(!file.eof()){
	file >> str;
	info_string[k] = str;
	if( k == 6 ) {
		info[j].brand = info_string[0].substr(0, info_string[0].size() - 1);
		info[j].model = info_string[1].substr(0, info_string[1].size() - 1);
		info[j].price = stoi(info_string[2].substr(0, info_string[2].size()-1));
		info[j].mileage =stoi( info_string[3].substr(0, info_string[3].size()-1));
		info[j].engine_power = stod(info_string[4].substr(0, info_string[4].size()-1)); 			
		info[j].transmission = info_string[5].substr(0, info_string[5].size()-1);
		info[j].color = info_string[6];
		j++;
		k = -1;
	}
	k++;
}
file.close();

cout << " Search modes: brand, min-price, max-price, transmission, color \n";
cout << " Input search mode 1:  "; 
string mode1 = "", mode2 = "";
cin >> mode1;
cout << " Input search mode 2:  ";
cin >> mode2;
string brand, color, transm;
int min_price, max_price;

if( mode1 == "brand" || mode2 == "brand"){
	cout << " Input data of brand: ";
	cin >> brand;
}
if ( mode1 == "color" || mode2 == "color" ) {
	cout << " Input data of color: ";
	cin >> color;
}
if( mode1 == "transmission" || mode2 == "transmission"){
	cout << " Input data of transmission: ";
	cin >> transm;
}
if ( (mode1 == "min-price" && mode2 == "max-price") || (mode2 == "min-price" && mode1 == "max-price")){
	cout << " Inpute min price: "; 
	cin >> min_price;
	cout << " Input max price: ";
	cin >> max_price;
} else if( mode1 == "min-price" || mode2 == "min-price" ) {
	cout << " Inpute min price: "; 
	cin >> min_price;
} else if(mode1 ==  "max-price" || mode2 == "max-price" ) {
	cout << " Input max price: ";
	cin >> max_price;
} else {
	cout << " Is not search mode \n";
}
//search cars from filter

if( ((mode1 == "brand" && mode2 == "min-price") || (mode1 == "min-price" && mode2 == "brand")) || ((mode1 == "brand" && mode2 == "max-price") || ( mode1 == "max-price" && mode2 == "brand") )) {
	for (int i = 0; i < 10; i++) {
		if (info[i].brand == brand && info[i].price >= min_price) {
			print(info[i]);
		} else if (info[i].price < max_price && info[i].brand == brand) {
			print (info[i]);
		}
	}
} else if ( ( ( mode1 == "transmission" && mode2 == "brand") || (mode1 == "brand" && mode2 == "transmission")) || (( mode1 == "brand" && mode2 == "color") || ( mode1 == "color" && mode2 == "brand")) ) {
	for (int i = 0; i < 10; i++) {
		if (info[i].transmission == transm && info[i].brand == brand) {
			print(info[i]);
		}
		if(info[i].color == color && info[i].brand == brand) {
			print(info[i]);
		}
	}
} else if ( ((mode1 == "min-price" && mode2 == "max-price" ) || (mode1 == "max-price" && mode2 == "min-price")) || ( (mode1 == "min-price" && mode2 == "transmission") ||( mode2 == "min-price" && mode1 == "transmission")) || ((mode1 == "min-price" && mode2 == "color") || (mode1 == "color" && mode2 == "min-price")) ) {
	for (int i = 0; i < 10; i++) {
		if (info[i].price >= min_price && info[i].price <= max_price) {
			print (info[i]);
		} else if ( info[i].transmission == transm && info[i].price >= min_price ) {
			print(info[i]);
		} else if ( info[i].color == color && info[i].price >= min_price ) {
			print(info[i]);
		}
	}
} else if ( ((mode1 == "max-price" && mode2 == "color") || (mode1 == "color" && mode2 == "max-price")) || ((mode1 == "max-price" && mode2 == "transmission") || (mode2 == "max-price" && mode1 == "transmission")) ) {
	for (int i = 0; i < 10; i++) {
		if (info[i].color == color && info[i].price <= max_price) {
			print(info[i]);
		} else if (info[i].transmission == color && info[i].price <= max_price) {
			print(info[i]);
		}
	}
} else if ( (mode1 == "transmission" && mode2 == "color") || (mode1 == "color" && mode2 == "transmission") ) { 
	for (int i = 0; i < 10; i++) {
		if( info[i].color == color && info[i].transmission == transm) {
			print(info[i]);
		}
	}
}

return 0;

}

void print( information info){
	cout << "================================================================\n";
	cout << " Brand:        " << info.brand << endl;
	cout << " Model:        " << info.model << endl;
	cout << " Price:        " << info.price << " $\n";
	cout << " Mileage:      " << info.mileage << " km\n";
	cout << " Engine power: " << info.engine_power << " L\n";
	cout << " Transmission: " << info.transmission << endl;
	cout << " Color:        " << info.color << endl;
	cout << "================================================================\n";
}
