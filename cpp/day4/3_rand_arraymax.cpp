#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main () {

srand(time(0));

  int n;

  cout << " Input size of the array: ";
  
  cin >> n;

  int arr [n], max;

  
  for (int i = 0; i < n; i++){
   
	  arr[i] = rand () % 100;
  	  
  	  cout << arr[i] << "   ";	  
  }
	  max = arr[0];

	  for (int i = 0; i < n - 1; i++){
	  
	  	if ( max < arr[i+1]){
			
			max = arr[i+1];

		}
  
	  }

	  cout << "\n Max = " << max << endl;

return 0;

}


