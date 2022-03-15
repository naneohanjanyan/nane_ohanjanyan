#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void reverse(int *ptr, int *ptr1, int size, int arr[]) {
   
    int temp = 0;

    for(;ptr <= (arr + size / 2); *(ptr1 --), *(ptr ++)){
       
        temp =   *(ptr);
        *(ptr) = *(ptr1);
        *(ptr1) = temp;
    } 
    
}

int main() {
    srand(time(0));
    
    const int size = 9;
    int arr[size], temp;
    
    for(int i = 0; i < size; i++) {
        arr[i] = rand() % 10 + 1;
        cout << arr[i] << "  ";
    }
    
    int * ptr, *ptr1;
    ptr = arr;
    ptr1 = arr + size - 1;
    cout << endl;
    
   // cout << *(ptr1 --)<< "         ";
   reverse(ptr, ptr1, size, arr);
  
    for(int i = 0; i < size; i++) {
        
        cout << arr[i] << "  ";
    }
  
    cout << endl; 
    
    return 0;
}

