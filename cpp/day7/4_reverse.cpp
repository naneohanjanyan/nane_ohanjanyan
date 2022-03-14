#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void sum(int *ptr, int size) {
   
    int temp = 0;

    for( int i = 4, j = 0; j < size / 2; i--, j++){
       
        temp =   *(ptr + i);
        *(ptr + i) = *(ptr + j);
        *(ptr + j) = temp;
    } 
    
}

int main() {
    srand(time(0));
    
    const int size = 5;
    int arr[size], temp;
    
    for(int i = 0; i < size; i++) {
        arr[i] = rand() % 10 + 1;
        cout << arr[i] << "  ";
    }
    
    int * ptr;
    ptr = arr;
    cout << endl;
    
    sum(ptr, size);
  
    for(int i = 0; i < size; i++) {
        
        cout << arr[i] << "  ";
    }
  
    cout << endl; 
    
    return 0;
}

