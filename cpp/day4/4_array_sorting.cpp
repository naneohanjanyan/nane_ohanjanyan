#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void sort (int arr[], int n){
  
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
}

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
 
 sort (arr, n);
 
 

   for (int i = 0; i < n; i++){

          cout << arr[i] << "   ";
  }

 cout << endl;

return 0;

}
