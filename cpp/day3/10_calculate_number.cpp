#include <iostream>

using namespace std;

  double f ( double number1, double number2, char operat) {
		  
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


     return 0;

}


int main () {

   return f (10, 4, '*');


}   



