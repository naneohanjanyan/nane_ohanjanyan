#include <iostream>
using namespace std;

int main() {
int year, count = 0;
cin >> year;
while ( count != 20 ){
	if  ( year % 4 == 0 && year % 100 != 0 ){
        	count++;
		cout << year << " Is leap year: " << endl;
	}
	year++;      
}

return 0;
}

