#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


int main () {

srand(time(0));

  int n;

 cout << " Input size of the array: ";

  cin >> n;
    int arr[n];
 
      for (int i = 0; i < n; i++){
	
	  arr[i] = rand () % 100;

          cout << arr[i] << "   ";
  }

cout << endl;
 
 int m;
  
  for (int i = 0; i < n / 2; i++) {
                         
		m = arr[i];
		
		arr[i] = arr[(n - 1 - i) - i];

		arr[n - 1 - i] = m;
		}


   for (int i = 0; i < n; i++){

          cout << arr[i] << "   ";
  }

 cout << endl;

return 0;

}
