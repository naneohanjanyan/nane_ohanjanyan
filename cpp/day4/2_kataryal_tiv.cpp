#include <iostream>

using namespace std;

void f ( int number ){

   int sum = 0, n = 1;

   if (number > 0) {

	 for (int n = 1; n != number; n++ ) {

        int j = 0;

          if ( number % n == 0){

              sum += n;
             
	      j++;
          }

      }
	 
	if ( number == sum){
      		cout << " this is a perfect number " << endl;

   	} else {

	   cout << " This is not a perfect number \n";

        }

    }
}


int main () {

  int number;
  
  cin >> number;

  f (number);

 
 return 0;

}
