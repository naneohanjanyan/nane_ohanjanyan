#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void sort (double arr[], int size){
  
  double m;
  
  for (int i = 0; i <size; i++) {
             
	for ( int j = i+1; j < size; j++){

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
  
  const int size = n;
    
    double arr[size];
 
      for (int i = 0; i < size; i++){
	
	  arr[i] = rand () % 100 / 5.0;

          cout << arr[i] << "   ";
  }

cout << endl;
 
 sort (arr, size);
 
   for (int i = 0; i < size; i++){

          cout << arr[i] << "   ";
  }

 cout << endl;

return 0;

}
