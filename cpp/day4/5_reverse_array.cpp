#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void reverse (double arr[], int size){
	for (int i = 0; i < size / 2; i++) {
		double temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}
}

void input (double arr[], int size){
	for (int i = 0; i < size; i++){
		arr[i] = rand () % 100 / 5.0;
		cout << arr[i] << "   ";
	}
	cout << endl;
}

void print ( double arr[], int size){
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

input (arr, size);
reverse(arr, size);
print (arr, size);

return 0;

}

