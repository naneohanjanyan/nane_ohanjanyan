#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void sum(int *ptr, int size, int arr[]) {
	int amount = 0;
	while(ptr <= (arr + size -1 )) {
		amount += *(ptr ++);
	}
	cout << " sum = " << amount << endl;
}

int main() {
srand(time(0));

int size;
cin >> size;
int * arr = new int [size];
int  amount;
int * ptr = arr;

for(int i = 0; i < size; i++) {
	arr[i] = rand() % 10 + 1;    
	cout << arr[i] << "  ";
}

cout << endl;
sum(ptr, size, arr);
   
  return 0;
}
