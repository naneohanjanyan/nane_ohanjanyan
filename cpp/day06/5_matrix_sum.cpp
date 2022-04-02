#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
srand(time(0));
int size1;
cout << " Enter size arrays: ";
cin >> size1;
const int size = size1;
int arr1[size][size], arr2[size][size], sum[size][size];
cout << " matrix 1: \n";
for(int i = 0; i < size; i++){
	for(int j = 0; j < size; j++){
		arr1[i][j] = 1 + rand() % 10;
		cout << arr1 [i][j] << "  ";
        }
        cout << endl;
}

cout << "\n matrix 2: \n";
for(int i = 0; i < size; i++){
	for(int j = 0; j < size; j++){
		arr2[i][j] = 1 + rand() % 10;
		cout << arr2 [i][j] << "  ";
	}
        cout << endl;
} 

cout << "\n matrix 1 + matrix 2 = \n";
for(int i = 0; i < size; i++){
	for(int j = 0; j < size; j++){
		sum[i][j] = arr1[i][j] + arr2[i][j];
		cout << sum [i][j] << "  ";
	}
        cout << endl;
}

return 0;
} 
