#include <iostream>

using namespace std;

	int number (int a){
	
	  int b;	
		while (a <=0 || a>=100){

		      cout << "\n Remember number: ";
   
  		      cin >> a;
		}

		do{
   		   cout << "\n Number = ";
   
    		   cin >> b;
	
		   if(a < b)  cout << " a < " << b;
 
		   else if (a > b) cout << " a > " << b;

		}while (a != b);
	       
		if (a == b){

			cout << " It's correct number \n";

		}

	return 0;
	}

int main () {

	return number (10);

}
