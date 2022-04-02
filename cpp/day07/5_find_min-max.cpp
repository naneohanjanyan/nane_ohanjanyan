#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void FindMinAndMaxElementsOfArray ( int arr[], int size) {
	int *min, * max, *ptr = arr;
    min = &arr[size - 1];
    max = &arr[0];
    
 for (; ptr <= (arr + size - 1); *(ptr ++) ){
        	if ( *max < *(ptr)){
            	*max = *(ptr);
		}
		if (*min > *(ptr)){
        		*min = *(ptr);
        	} 
    	} 
    	cout << " min = " << *min << "  max = " << *max << endl;
}
 
int main() {
srand(time(0));
int size;
cout << " Array size: ";
cin >> size;
int *arr = new int [size];
for(int i = 0; i < size; i++) {
	arr[i] = rand() % 20 + 1;
        cout << arr[i] << "  ";
}
cout << endl;
   FindMinAndMaxElementsOfArray (arr, size);
   
    return 0;
}
