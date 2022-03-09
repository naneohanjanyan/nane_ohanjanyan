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
  
  for (int i = 0; i <n; i++) {
             
	for ( int j = i+1; j < n; j++){

		if ( arr [i] > arr [j]){
                   
			m = arr[i];
			arr[i] = arr[j];
			arr[j] = m;
		}
	}
  }


   for (int i = 0; i < 10; i++){

          cout << arr[i] << "   ";
  }

 cout << endl;

return 0;

}
