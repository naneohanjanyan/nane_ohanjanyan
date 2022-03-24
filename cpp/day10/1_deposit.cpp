#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstring>
using namespace std;

float f(float mother_sum, float percent, int month) {

	float month_percent = percent / 12, sum = mother_sum;
	sum += (sum * month_percent) / 100;

return sum;
}

int main(int argc, char *argv[]) {

float mother_sum = atof(argv[1]);
int month = atoi(argv[2]);
float percent = atof(argv[3]);
cout << " mother sum = " << mother_sum;
cout  << ", percent = " << percent << ", month number = " << month << endl;

time_t now = time(0);
char* date_time = ctime(&now);
string str[5];
int x = 0;
for(int i = 0; date_time[i] != '\0'; i++) {
	if(date_time[i] == ' ') {
		x++;
		continue;
	}
	str[x] += date_time[i];
}

string month_str[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Agu", "Sep", "Oct", "Nov", "Dec"};
int year = stoi(str[4]);
int y = 0;
for(int i = 0; i < 11; i++) {
	if(str[1] ==month_str[i]) {
		y = i;
		/*for(int j = 0; j < 20; j++) {
			str[1] = month[(j + i + 1) % 12];
			cout << str[1] << year <<  " ";
			if(str[1] == "Dec") year++;
		}
	break;*/
	}
}

//f(mother_sum, percent, month);
for( int i = 0; i < month; i++) {
	str[1] = month_str[(y + i + 1) % 12];
	//cout << str[1] << year <<  " ";
	if(str[1] == "Dec") {
		 year++;
	}
cout << str[1] << ' ' << str[2]<< ' ' << year << "  " << f(mother_sum, percent, month) << " amd " << endl;     //fixed << setprecision(2) << sum; 
}

return 0;
}
 

		
