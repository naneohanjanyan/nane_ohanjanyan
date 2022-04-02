#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void indMinAndMaxElementsOfArray ( int *ptr, int *min, int *max, int arr[], int size) {
    
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
    const int size = 9;
    int arr[size], temp;
    
    for(int i = 0; i < size; i++) {
        
	arr[i] = rand() % 10 + 1;
        cout << arr[i] << "  ";
    }
    
    cout << endl;
    
    int *min, * max, *ptr = arr;
    min = &arr[4];
    max = &arr[0];
    
    indMinAndMaxElementsOfArray (ptr, min, max, arr, size);
   
    return 0;
}
