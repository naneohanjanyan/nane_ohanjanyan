#include <iostream>

using namespace std;

void Findfactoryal (int number){
	int faktoryal = 1;
	while (number > 0){
		faktoryal *= number;
		 number -- ;
	}
	cout << " Faktoryal = " << faktoryal << "\n";
}

int main() {

int number;
cout << " Number = ";
cin >> number;
Findfactoryal(number);

return 0;
}
