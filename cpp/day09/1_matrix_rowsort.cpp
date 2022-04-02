#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "../lib/matrix.h"
using namespace std;

void print_matrix(int** arr, int row, int column ) {
	for (int** ptr = arr; ptr < arr + row; ptr++) {
        	for (int* ptr1 = *ptr; ptr1 < *ptr + column; ptr1++) {
            		cout << *ptr1 << " ";
        }
        cout << endl;
    }
}

int main() {
srand(time(0));

int row, column;
cout << " Enter rows:   ";
cin >> row;
cout << " Enter column: ";
cin >> column;

int** arr = new int* [row];

for(int** ptr = arr; ptr < arr + row; ptr++){
	*ptr =  new int [column];
	for(int *ptr1 = *ptr; ptr1 < *ptr + column; ptr1++) {
		*ptr1 = 1 + rand() % 10;
	}
}

print_matrix(arr, row, column);
cout << endl;
sort(arr, row, column);
print_matrix(arr, row, column);
return 0;
}
