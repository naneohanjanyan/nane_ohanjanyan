#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


int main () {

srand(time(0));

  int n;

  cout << " Input size of the array: ";

  cin >> n;

  int arr [n], m;


  for (int i = 0; i < n; i++){
	
	  arr[i] = rand () % 100;

          cout << arr[i] << "   ";
  }

cout << endl;
  
  for (int i = 0; i < n + 1; i++) {
             
	for ( int j = 0; j < n; j++){

		if ( arr [j] > arr [j+1]){
                   
			m = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = m;
		}
	}
  }


   for (int i = 0; i < n; i++){

          cout << arr[i] << "   ";
  }

 cout << endl;

return 0;

}
