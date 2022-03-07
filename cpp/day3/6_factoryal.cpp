#include <iostream>

using namespace std;

  int fact (int number){

  int faktoryal = 1;


	while (number > 0){

    		faktoryal *= number;

   		 number -- ;

	}

    cout << " Faktoryal = " << faktoryal << "\n";

    return 0;

  }



int main()
{

	return fact (5);

}
