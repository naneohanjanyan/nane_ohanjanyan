#include <iostream>
using namespace std;

string DateFind (long long);

int main(){

long long sec ;
cout << "Input seconds: ";
cin >> sec;

string result =  DateFind(sec);
cout << "UTC: " << result << "\n";
	
return 0;
}

string DateFind(long long seconds) {
	string result = "";
	int MonthDay[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	long int days, Time, Days, index, date, month, hours, minutes, check = 0;
	int Year = 1970;
	days = seconds / (24 * 60 *60);
	Time = seconds % (24 * 60 *60);

	while (days >= 365) {
		if (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0))  {
			days -= 366;
		} else {
      			days -= 365;
		}
		Year += 1;
	}
	Days = days + 1;	
	if (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0)) {
		check = 1;
	}
	month = 0, index = 0;
	if (check == 1) {
		while (true)  {
			if (index == 1) {
        			if (Days - 29 < 0) {
            				break;
        			}
        			month ++;
        			Days -= 29;
        		} else {
        			if (Days - MonthDay[index] < 0)  {
            				break;
				}		
        			month += 1;
        			Days -= MonthDay[index];
		  	}			
			index += 1;
		}
	} else {
		while (true)  {
			if (Days - MonthDay[index] < 0)  {
				break;
			}
			month ++;
			Days -= MonthDay[index];
			index ++;
		}
	}
	if (Days > 0) {
		month ++;
		date = Days;
	} else  {
		if (month == 2 && check == 1) {	
			date = 29;
		} else  {
			date = MonthDay[month - 1];
		}
	}

	hours = Time / 3600;
	minutes = (Time % 3600) / 60; 
/*	result += (date < 10) ? "0" : "";
	result += to_string(date);
	result += (month < 10) ? "/0":"/";
	result += to_string(month);
	result += "/";
	result += to_string(Year);
	result += (hours < 10) ? " 0":" ";
	result += to_string(hours);
	result += (minutes < 10) ? ":0":":";
	result += to_string(minutes);*/

	result += ( (date < 10) ? "0" : "" ) + to_string(date) + ( (month < 10) ? "/0" : "/" ) + to_string(month) + "/" + to_string(Year)+			( (hours < 10) ? " 0" : " " ) + to_string(hours) + ( (minutes < 10) ? ":0" : ":" ) + to_string(minutes);
	return result;
}
