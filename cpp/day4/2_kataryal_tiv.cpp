#include <iostream>

using namespace std;


void f ( int number ){

   int sum = 0, n = 1, arr [10];

   if (number > 0) {

	while ( n != number ) {

        int j = 0;

          if ( number % n == 0){

    	      arr [j] = n;

              sum += arr [j];
             
	      j++;
          }

           n++;

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
