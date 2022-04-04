#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstring>
using namespace std;

float month_sum(float mother_sum, float percent) {
	return mother_sum * (percent / 100) / 12;
}

int main(int argc, char* argv[]) {
time_t now = time(0);
char* date_time = ctime(&now);
string date[5];
int x = 0;
for(int i = 0; date_time[i] != '\0'; i++) {
	if(date_time[i] == ' ' && date_time[i+1] != ' ') {
		x++;
		continue;
	}
	date[x] += date_time[i];
}
int day = stoi(date[2]);
int year = stoi(date[4]);
int m;
string month_str[12] = {"Jan ", "Feb ", "Mar ", "Apr ", "May ", "Jun ", "Jul ", "Agu ", "Sep ", "Oct ", "Nov ", "Dec "};
for(int j = 0; j < 12; j++) {
	if(month_str[j] == date[1]) {
		m = j;
		break;
	}
}

float mother_sum = atof(argv[1]);
int month = atoi(argv[2]);
float percent = atof(argv[3]);
float monthly;
cout << " mother sum = " << mother_sum << " amd  "
	<< ", percent = " << percent 
	<< ", month number = " << month << endl;

for( int i = 0; i < month;i++) {
	monthly = month_sum(mother_sum, percent);
	mother_sum += monthly;
	cout << month_str[m] << ' ' << day << ' ' << year << " | " << mother_sum << " amd " << monthly << endl;
	m++;
	if(m == 12) {
		year++;
		m = 0;
	}
}

return 0;
}
 

		
