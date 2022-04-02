#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
 
 int main()
 {
     srand(time(0));
     const int m = 10;
     int arr[m], j =0, a,b, tiv = 0;
    
    for(int i = 0; j != m; i++ ){
        
         a = rand() % 20;
         b = rand() % 20;   
         tiv = a*a + b*b;
        
	 if(tiv % 5 == 0){
        
	     arr[j]= tiv;
             cout <<a << '*'<< a << '+' << b << '*' << b <<  " = " << arr[j] << endl;
             j++;
         }
     }
     return 0;
 }

