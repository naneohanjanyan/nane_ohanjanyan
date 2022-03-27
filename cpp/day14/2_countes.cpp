#include <iostream>
#include <fstream>

using namespace std;

enum PhoneCodes {
	Armenia = 374,
	Georgia = 995,
	France = 33,
	China = 86,
	Belarus = 375
};
struct information{
	string countryName;
	string capital;
	string domain;
	int GDP;
	int population; 
	int area;
	int phonecode;
};

int main(int argc, char *argv[]) {

PhoneCodes PhoneCode;
int arr_PhoneCode[5] = {Armenia, Georgia, France, China, Belarus};

struct information info[7];
ifstream file;
file.open("countres.txt");
string str = "", info_string[6]; 
int i = 0, j = 0;
while(!file.eof()){
	file >> str;
	info_string[i] = str;
	i++;
	if( i == 5) {
		info[j].countryName = info_string[0];
		info[j].capital = info_string[1];
		info[j].domain = info_string[2];
		info[j].GDP = stoi(info_string[3]);
		info[j].population = stoi(info_string[4]);
		info[j].area = stoi(info_string[5]);
		info[j].phonecode = arr_PhoneCode[j];
		i = 0;
		j++;
	}
}
file.close();
if (argv[1] == "search") {
	string input = "";
	string name = "";
	cout << "Input search mode (countryName / capital / domain): ";
	cin >> input;
	cout << "Input name serach mode " << input << ":";
	cin >> name;
	if (input == "capital") {
		for (int i = 0; i < 6; i++) {
			if (info[i].capital == name) {
				cout << " Country: " << info[i].countryName << endl;
				cout << " Capital: " << info[i].capital << endl;
				cout << " Domain: " << info[i].domain << endl;
				cout << " GDP: " << info[i].GDP << endl;
				cout << " Population: " << info[i].population << endl;
				cout << " Area: " << info[i].area << endl;
				cout << " Phone Code: " << info[i].phonecode << endl;
			}
 		}
	} else if (input == "countryName") {
		for (int i = 0; i < 6; i++) {
			if (info[i].countryName == name) {
				cout << " Country: " << info[i].countryName << endl;
				cout << " Capital: " << info[i].capital << endl;
				cout << " Domain: " << info[i].domain << endl;
				cout << " GDP: " << info[i].GDP << endl;
				cout << " Population: " << info[i].population << endl;
				cout << " Area: " << info[i].area << endl;
				cout << " Phone Code: " << info[i].phonecode << endl;
			}
		}
	} else if (input == "domain") {
		for (int i = 0; i < 6; i++) {
			if (info[i].domain == name) {
				cout << " Country: " << info[i].countryName << endl;
				cout << " Capital: " << info[i].capital << endl;
				cout << " Domain: " << info[i].domain << endl;
				cout << " GDP: " << info[i].GDP << endl;
				cout << " Population: " << info[i].population << endl;
				cout << " Area: " << info[i].area << endl;
				cout << " Phone Code: " << info[i].phonecode << endl;
			}
		}
	} else {
		cout << "Input search mode (countryName / capital / domain): " << endl;
	}
}

return 0;
}

