#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void FindMax ( double arr[], int size){
	double max = arr[0];
	for (int i = 0; i < size - 1; i++){
		if ( max < arr[i+1] ){
			max = arr[i+1];
		}
	}
	cout << "\n Max = " << max << endl;
}


int main () {
srand(time(0));

int size;
cout << " Input size of the array: ";
cin >> size;
double *arr = new double (size);
for (int i = 0; i < size; i++){
	arr[i] = rand () % 100 / 2.0;
	cout << arr[i] << "   ";	  
}

FindMax (arr, size);

return 0;

}
