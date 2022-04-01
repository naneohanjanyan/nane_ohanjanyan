#include <iostream>
using namespace std;
int main() {

int year = 2022;
while (year <= 2042){
      	if (year % 4 == 0){
		cout << year << " leap year \n";
	}
	year ++;
}
return 0;
}

