#include <iostream>
using namespace std;

int main() {

int number, b = 0, mult = 1;
cout << " Number: ";
cin >> number;
while (b <= 10) {
	mult = number * b;
	cout << number << " * " << b << " = " << mult << "\n";
	b++;
}

return 0;
}
