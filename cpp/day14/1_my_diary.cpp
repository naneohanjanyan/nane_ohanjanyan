#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct date{
	string Date = "";
	string Note = "";
	string command = "";
};

void add_date_to_string(string, int *, int *, int * );
bool emptying(string);

int main() {   

int dd = 0, mm  = 0, yy = 0; 
struct date dateinput;
dateinput.command = "add";

while(dateinput.command == "add") {
	cout << " Input date (dd/mm/yy): ";
	cin >> dateinput.Date;
	cin.ignore();

	cout << " Add Note: ";
	getline(cin,dateinput.Note);
	add_date_to_string(dateinput.Date,&dd,&mm, &yy);
	
	string file_name = to_string(dd) + "_" + to_string(mm) + "_" + to_string(yy)+".txt";
	fstream file;
	file.open(file_name, fstream::in | fstream::out | fstream::app);
	if(file.is_open()){
		if (emptying(file_name)) {
			file << dateinput.Date << "\t" <<  dateinput.Note << "\n";
		} else {
			file << "\t\t" <<  dateinput.Note << "\n";
		}
	}

	cout << " Command (add/exit): ";
	cin >> dateinput.command;
	if ( dateinput.command != "add" && dateinput.command != "exit") {
       		cout << "Enter command (add/exit): ";
		cin >> dateinput.command;
	}
}

return 0;
}

void  add_date_to_string(string Date1,int *day, int *month, int* year) {
	string date = "";
	string dd = "";
	string mm = "";
	string yy = "";
	int x = 0;

	for(int i = 0; Date1[i] !='\0'; i++) {
		if(Date1[i] !='/') {
			date += Date1[i];
			x++;
		} else if( (x == 1 || x == 2) && Date1[i] == '/') {
			if(date[0] == '0' && x == 2) {
				dd = date[1];
				date = " ";
			} else {
				dd = date;
				date = "";
			}
		} else if( (x >=2 && x <= 4) && Date1[i] == '/') {
			if(date[0] == '0' && x == 4) {
				mm = date[1];
				date = " ";
			} else {
				mm = date;
				date = "";            
			}
		}
	}

	yy = date;
	*day= stoi(dd);
	*month = stoi(mm);
	*year = stoi(yy);
}

bool emptying(string file_name) {
	fstream file;
	string str = "";
	file.open(file_name, fstream::in | fstream::out | fstream::app);

	while (!file.eof()) {
		file >> str;
	}
	if(str == "") {
		return true;
	} else {
		return false;
	}
}

