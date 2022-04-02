#include <iostream>
using namespace std;

void calculate ( double number1, double number2, char operat) {
	double result;
	switch (operat) {
		case '+':
			result = number1 + number2;
			cout << number1 << " + " << number2 << " = " << result << "\n";
			break;
		case '-':
			result = number1 - number2;
			cout << number1 << " - " << number2 << " = " << result << "\n";
			break;
		case '*':
			result = number1 * number2;
			cout << number1 << " * " << number2 << " = " << result << "\n";
			break;
		case '/':
			if (number2 == 0){
				cout << " Division by 0 is not possible \n";
				break;
			} else {
				result = number1 / number2;
				cout << number1 << " / " << number2 << " = " << result << "\n";
				break;
			}
		default:
			cout << " It's not an operator \n";
	}
}

int main () {

double num1, num2;
char operat;
cout << " Input number 1 : ";
cin >> num1;

cout << " Input operator: ";
cin >> operat;

cout << " Input number 2 : ";
cin >> num2;

calculate(num1, num2, operat);

return 0;
}

