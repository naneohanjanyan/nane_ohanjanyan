#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void sum(int *ptr, int size) {
	
	int amount = 0;

	for( int i = 0; i < size; i++) {
       	
		amount += *(ptr + i);
	}
  
	cout << " sum = " << amount << endl;
}

int main() {
srand(time(0));
	
	const int size = 5;
	int arr[size], amount;
	int * ptr;
	ptr = arr;
    
	for(int i = 0; i < size; i++) {
    		
		arr[i] = rand() % 10 + 1;    
		cout << arr[i] << "  ";
    	}
   	
	cout << endl;
    	
	sum(ptr, size);
   
    
    return 0;
}
