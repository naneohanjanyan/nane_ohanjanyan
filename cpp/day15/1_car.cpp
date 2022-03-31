#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct information {
	string brand;
	string model;
	int price;
	int mileage;
	double power;
	string transmission;
	string color;
};

void print (information info);

int main () {

fstream file1;
file1.open ("car_info.txt");
string str1 = "";
int row = 0;
while (getline(file1,str1)) {
	 row++;
}
file1.close();
struct information info[row];
ifstream file;
file.open("car_info.txt");
string str = "", info_string[row];
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
		info[j].power = stod(info_string[4].substr(0, info_string[4].size()-1)); 			
		info[j].transmission = info_string[5].substr(0, info_string[5].size()-1);
		info[j].color = info_string[6];
		j++;
		k = -1;
	}
	k++;
}
file.close();
cout << "Search modes: 0 - show, 1 - brand, 2 - model, 3 - min-price, 4 - max-price, 5 - min-mileage, 6 - max-mileage, 7 - transmission, 8 - color, 9 - engine power\n";
bool 	condition = true,
	brand_ = false, 
	model_ = false, 
	min_price_ = false,
	max_price_ = false, 
	min_mileage_ = false, 
	max_mileage_ = false, 
	transm_ = false,
	color_ = false,
	power_ = false; 

string brand, model,  color, transm;
int min_price, max_price, min_mileage, max_mileage;
double power;
while(condition) {
	int mode;
	cout << " Input search mode: ";
	cin >> mode;
	cin.ignore();
	switch (mode) {
		case 0:
		condition = false;
		break;

		case 1:
		cout << " Brand: ";
		getline(cin, brand);
		brand_ = true;
		break;

		case 2:
		cout << " Model: ";
		getline(cin, model);
		model_ = true;

		case 3:
		cout << " Min price: ";
		cin >> min_price;
		min_price_ = true;
		break;

		case 4:
		cout << " Max price: ";
		cin >> max_price;
		max_price_ = true;
		break;

		case 5:
		cout << " Min mileage: "; 		
		cin >> min_mileage;
		min_mileage_ = true;
		break;

		case 6:
		cout << " Max mileage: ";
		cin >> max_mileage;
		max_mileage_ = true;
		break;

		case 7:
		cout << " Transmission: ";
		cin >> transm;
		transm_ = true;
		break;

		case 8:
		cout << " Color: ";
		cin >> color;
		color_ = true;
		break;

		case 9:
		cout << " Engine power: ";
		cin >> power; 
		power_ = true;
		break;
	}
}
for ( int i = 0; i < row; i++) {
	if (brand_ && brand != info[i].brand) continue;
	if (model_ && model != info[i].model) continue;
	if (min_price_ && min_price > info[i].price) continue;
	if (max_price_ && max_price < info[i].price) continue;
	if (min_mileage && min_mileage < info[i].mileage) continue;
	if (max_mileage_ && max_mileage > info[i].mileage) continue;
	if (transm_ && transm != info[i].transmission) continue;
	if (color_ && color != info[i].color) continue;
	if (power_ && power != info[i].power) continue;
	print(info[i]);
}
return 0;
}
void print( information info){
	cout << "================================================================\n";
	cout << " Brand:        " << info.brand << endl;
	cout << " Model:        " << info.model << endl;
	cout << " Price:        " << info.price << " $\n";
	cout << " Mileage:      " << info.mileage << " km\n";
	cout << " Engine power: " << info.power << " L\n";
	cout << " Transmission: " << info.transmission << endl;
	cout << " Color:        " << info.color << endl;
}
