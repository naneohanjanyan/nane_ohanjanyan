#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "matrix.h"
using namespace std;

int main() {
srand(time(0));

int m, n;
cout << " Enter height: ";
cin >> m;
cout << " Enter width: ";
cin >> n;

int **arr = new int *[m];
int **ptr = arr;

for(;ptr <= arr + m - 1; ptr++){
	*ptr =  new int [n];
	for(int *ptr1 = *ptr; ptr1 <= *ptr + n - 1; ptr1++) {

		*ptr1 = rand() % 10;
		cout << *ptr1 << "  ";
	}
	cout << endl;
}

cout << endl;

sort(arr, m, n);

for(int **ptr = arr; ptr <= arr + m - 1; ptr++){
	for(int *ptr1 = *ptr; ptr1 <= *ptr + n - 1; ptr1++) {

		cout << *ptr1 << "  ";
	}
	cout << endl;
}
return 0;
}
