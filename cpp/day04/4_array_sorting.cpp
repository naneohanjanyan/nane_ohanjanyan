#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void sort (double arr[], int size){
	double temp;
	for (int i = 0; i < size + 1; i++) {
		for ( int j = 0; j < size - 1; j++){
			if ( arr [j] > arr [j + 1]){
                   		temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
 	 }
}

void print ( double arr[], int size) {
	for (int i = 0; i < size; i++){
          cout << arr[i] << "   ";
	}
	cout << endl;
}

int main () {
srand(time(0));

int size;
cout << " Input size of the array: ";
cin >> size;
double *arr = new double [size];

for (int i = 0; i < size; i++){
	arr[i] = rand () % 100 / 5.0;
	cout << arr[i] << "   ";
}
cout << endl;

sort (arr, size);
print (arr,size);

return 0;
}
