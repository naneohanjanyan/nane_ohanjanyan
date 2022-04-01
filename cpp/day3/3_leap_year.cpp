#include <iostream>

using namespace std;

void FindLeapYears ( int year){
	for (int count = 1; count <= 20;){
		if (year % 4 == 0 && year % 100 != 0){
			cout << year << " Is leap year: " << endl;
		count++;
	}
        year ++;
	}
}

int main() {
int year;
cout << " Input year: ";
cin >> year;

FindLeapYears (year);
return 0;
}
