#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct date{
	string Date = "";
	string Note = "";
	string command = "";
};

enum week_day{
	Mon = 1,
	Tue,
	Wed,
	Thu,
	Fry,
	Sut,
	Sun
}; 

void add_date_to_string(string, int *, int *, int * );
bool emptying(string);
int weekDay(int, int , int);

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

	string week_dayname = "";
	int wday1 = weekDay(dd,mm,yy);
	week_day weekday = (week_day)wday1;
	switch(weekday) {                 
		case Mon: week_dayname = "Monday"; break;
		case Tue: week_dayname = "Tuesday"; break;
		case Wed: week_dayname = "Wednesday"; break;
		case Thu: week_dayname = "Thusday"; break;
		case Fry: week_dayname = "Friday"; break;
		case Sut: week_dayname = "Suturday"; break;
		case Sun: week_dayname = "Sunday"; break;
	}

	string file_name = "./notes/" + to_string(dd) + "_" + to_string(mm) + "_" + to_string(yy)+".txt";
	fstream file;
	file.open(file_name, fstream::in | fstream::out | fstream::app);
	if(file.is_open()){
		if (emptying(file_name)) {
			file << week_dayname << "  " << dateinput.Date << "\t" <<  dateinput.Note << "\n";
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

int weekDay(int dd,int mm,int yy) { 
	int weeknum = dd + ((153 * (mm + 12 * ((14 - mm) / 12) - 3) + 2) / 5)
		      + (365 * (yy + 4800 - ((14 - mm) / 12)))
		      + ((yy + 4800 - ((14 - mm) / 12)) / 4)
                      - ((yy + 4800 - ((14 - mm) / 12)) / 100)
                      + ((yy + 4800 - ((14 - mm) / 12)) / 400)
                      - 32045;

    return (weeknum + 1) % 7 ;
}

