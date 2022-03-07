#include <iostream>

using namespace std;

   int years ( int year){

     for (int i = 1; i <= 20;){

      	if (year % 4 == 0 || year % 100 == 0 && year % 400 == 0){

	cout << year << " leap year \n";
       
	i++;

       	}
        year ++;
 }

   return 0;

   }





int main()
{
	return years (2017) ;

}
