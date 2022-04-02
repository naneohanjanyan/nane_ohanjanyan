#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void reverse(int size, int arr[]) {
	int * ptr, *ptr1;
	ptr = arr;
	ptr1 = arr + size - 1;
	int temp = 0;
	for(;ptr < (arr + size / 2); *(ptr1 --), *(ptr ++)){
		temp =   *(ptr);
        	*(ptr) = *(ptr1);
        	*(ptr1) = temp;
	} 
}

int main() {
srand(time(0));

int size;
cout << "Array size: ";
cin >> size;
int * arr = new int [size];
    
for(int i = 0; i < size; i++) {
	*(arr + i) = rand() % 10 + 1;
        cout << *(arr + i) << "  ";
}
    
cout << endl;
    
reverse(size, arr);
  
for(int i = 0; i < size; i++) {
	cout << arr[i] << "  ";
}
cout << endl; 
    
    return 0;
}

