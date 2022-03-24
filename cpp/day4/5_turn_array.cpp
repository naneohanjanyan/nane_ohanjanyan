#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void revers (double arr[], int size){
    
    for (int i = 0; i < size / 2; i++) {
                         
	double m = arr[i];
		
	arr[i] = arr[size - i - 1];

	arr[size - i - 1] = m;
   }

}

void input (double arr[], int size){
    
      for (int i = 0; i < size; i++){
	
	  arr[i] = rand () % 100 / 5.0;

          cout << arr[i] << "   ";
      }
 
cout << endl;
    
}

void output ( double arr[], int size){
  
   for (int i = 0; i < size; i++){

          cout << arr[i] << "   ";
  }

 cout << endl;
 
}

int main () {

srand(time(0));

  int n;

  cout << " Input size of the array: ";

  cin >> n;
    
  const int size = n;
    
  double arr[size];
 

  input (arr, size);
  
  revers(arr, size);
  
  output (arr, size);


return 0;

}

