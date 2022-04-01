#include <iostream>

using namespace std;

void  multiply_table (int number) {
	int b = 0, multi = 1;
	while (b <= 10) {
		multi = number * b;
		cout << number << " * " << b << " = " << multi << "\n";
		b++;
	}
}

int main() {

int number;
cout << " Input number: ";
cin >> number;
multiply_table (number);
return 0;
}

