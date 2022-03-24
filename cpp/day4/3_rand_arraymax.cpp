#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void max1 ( double arr[], int size){
    
    double max = arr[0];

	  for (int i = 0; i < size - 1; i++){
	  
	  	if ( max < arr[i+1]){
			
			max = arr[i+1];

		}
  
	  }

    cout << "\n Max = " << max << endl;
}


int main () {

srand(time(0));

  int n;

  cout << " Input size of the array: ";
  
  cin >> n;
  
  const int size = n;

  double arr [size], max;

  for (int i = 0; i < size; i++){
   
	  arr[i] = rand () % 100 / 5.0;
  	  
  	  cout << arr[i] << "   ";	  
  }
	  
   max1 (arr, size);

	 

return 0;

}
