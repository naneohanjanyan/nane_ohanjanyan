#include <iostream>

using namespace std;

int main()
{
    double number1, number2, result;
    char operat;

 cout << " Input number 1 : ";
 cin >> number1;

 cout << " Input operator: ";
 cin >> operat;


 cout << " Input number 2 : ";
 cin >> number2;

while  (number2 == 0){
  
	 cout << " Input other number 2: ";

	 cin >> number2;
 
 }

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
                result = number1 / number2;

                 cout << number1 << " / " << number2 << " = " << result << "\n";

                 break;

        default:
                cout << " It's not an operator \n";

 }


     return 0;
}

