#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

int hotelNum(); 
struct data {
	int index;
	string  country;
	string  city;
	string  address;
	string  name;
	int star;
	int singleRoom;
	int price1;
	int twinRoom;
	int price2;
	int tripleRoom;
	int price3;
	string spa;
	string fitnes;
};

void print (data info);

int main () {
fstream f;
f.open("hotel.txt");
int  row = 0 ;
string str1 = "";

while(getline(f, str1)){
	row++;
}

f.close();

struct data info[row];
ifstream file;
file.open("hotel.txt");

string str = "", info_string[14] ;
int i = 0, j = 0;
while(!file.eof()){
	file >> str;
	info_string[i] = str;
	if( i == 13) {
		info[j].index = stoi(info_string[0]);
		info[j].country = info_string[1].substr(0, info_string[1].size()-1);
		info[j].city = info_string[2].substr(0, info_string[2].size()-1);
		info[j].address = info_string[3].substr(0, info_string[3].size()-1);
		info[j].name = info_string[4].substr(0, info_string[4].size()-1);
		info[j].star = stoi(info_string[5].substr(0, info_string[5].size()-1));
		info[j].singleRoom = stoi(info_string[6].substr(0, info_string[6].size()-1));
		info[j].price1 = stoi(info_string[7].substr(0, info_string[7].size()-1));
		info[j].twinRoom = stoi(info_string[8].substr(0, info_string[8].size()-1));
		info[j].price2 = stoi(info_string[9].substr(0, info_string[9].size()-1));
		info[j].tripleRoom = stoi(info_string[10].substr(0, info_string[10].size()-1));
		info[j].price3 = stoi(info_string[11].substr(0, info_string[11].size()-1));
		info[j].spa = info_string[12].substr(0, info_string[12].size()-1);
		info[j].fitnes  = info_string[13];
		i = -1;
		j++;
	}
	i++;
}
file.close();
cout << "=================================================";
cout << "\n\t\tHotel  Search Programm\n";
cout << "=================================================";
cout << "\n\n";
cout << "\t\tSearch Hotel Filter\n";
cout << "\t\t=================\n";
cout << "0 - Search | 1 - country | 2 - city | 3 - address | 4 - name | 5 - star  | 6 - singleRoom  | 7 - twinRoom | 8 - tripleRoom | 9 - price min | 10 - price max ";
cout << "\n\n";

bool check = true;
bool temp[10] = {false};
string  country;string city;string address;string name;
int   star;int   singleRoom;int   twinRoom;int   tripleRoom;int   minPrice;int   maxPrice;	



while(check) {
	cout << "Enter search mode: ";
	int mode;
	cin >> mode;
	switch (mode) {
		case 0:
		check = false;
		break;

		case 1:
		cout << "Input Country: ";
		cin  >> country;
		temp[0] = true;
		break;

		case 2:
		cout << "Input City: ";
		cin  >> city;
		temp[1] =true;
		break;

		case 3:
		cout << "Input address: ";
		cin >> address;
		temp[2] = true;
		break;

		case 4:
		cout << "Input Name: ";
		cin >> name;
		temp[3] = true;
		break;

		case 5:
		cout << "Input Star: ";
		cin  >> star;
		temp[4] = true;
		break;

		case 6:
		temp[5] = true;
		break;
	
		case 7:
		temp[6] = true;
		break;

		case 8:
		temp[7] = true;
		break;

		case 9:
		cout << "Input MinPrice: ";
		cin  >> minPrice;
		temp[8] = true;
		break;

		case 10:
		cout << "Input MaxPrice: ";
		cin  >> maxPrice;
		temp[9] = true;
		break;
	}
}


for (int k = 0; k < row; k++) {
	if( temp[0] && country != info[k].country ) continue;
	if(temp[1] && city != info[k].city) continue;
	if(temp[2] && address != info[k].address) continue;
	if(temp[3] && (info[k].name != name)) continue;
	if(temp[4] && info[k].star != star) continue;
	if(temp[5] && info[k].singleRoom < 0) continue;
	if(temp[6] && info[k].twinRoom  < 0) continue;
	if(temp[7] && info[k].tripleRoom  < 0) continue;
	if(temp[8] && temp[5] && info[k].price1 >  minPrice) continue;
	if(temp[9] && temp[5] && info[k].price1 <  maxPrice) continue;
	if(temp[8] && temp[6] && info[k].price2 >  minPrice) continue;
	if(temp[9] && temp[6]  && info[k].price2 <  maxPrice) continue;
	if(temp[8] && temp[7] && info[k].price3 >  minPrice) continue;
	if(temp[9] && temp[7] && info[k].price3 <  maxPrice) continue;
	print(info[k]);
}

cout << " For booking to room enter hotel index: ";
int hotelindex;
cin >> hotelindex;
cout << " Enter which room you want to book( singlei - 1, twin - 2, triple - 3): ";
int room_type;
cin >> room_type;

if (room_type == 1 && info[hotelindex].singleRoom != 0) {
	cout << " Room booked \n";
	info[hotelindex].singleRoom --;
} else if (room_type == 2 && info[hotelindex].twinRoom != 0 ) {
	cout << " Room booked \n";
	info[hotelindex].twinRoom --;
} else if (room_type == 3 && info[hotelindex].tripleRoom != 0 ) {
	cout << " Room booked \n";
	info[hotelindex].tripleRoom --;
}

return 0;  

}

int hotelNum() {  
	int temp = 0;
	string str = "";
	fstream f;
	f.open("hotel.txt");
	while(getline(f, str)){
		temp++;
	}
f.close();
return temp;
}

void print(data info) {
	cout << info.index << ".  Country:-----------------> " << info.country << endl;
	cout << "City:-----------------> " << info.city << endl;
	cout << "Address;--------------> " << info.address << endl; 
	cout << "Name:-----------------> " << info.name << endl;
	cout << "Star:---------------> " << info.star << endl;
	cout << "Singl Room:-------> " << info.singleRoom << endl;
	cout << "Price:---------------> " << info.price1 << endl;
	cout << "Twin Room:-------> " << info.twinRoom << endl;
	cout << "Price:---------------> " << info.price2 << endl;
	cout << "Tripl Room:-------> " << info.tripleRoom << endl;
	cout << "Price:---------------> " << info.price3 << endl;
	cout << "=================================" << endl;
}
