#include <iostream>

using namespace std;

   int number (int a){
	
   int b = 0, prod = 1;


while (b <= 10) {

       	prod = a * b;
 
	cout << a << " * " << b << " = " << prod << "\n";

       	b++;

}
   
 
  

    return 0;
}





int main()
{

	return number (14);

}

