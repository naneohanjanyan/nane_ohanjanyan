#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
    
    srand(time(0));
    const int size = 5;
    int arr[size], temp;
    
    for(int i = 0; i < size; i++) {
        
	arr[i] = rand() % 10 + 1;
        cout << arr[i] << "  ";
    }
    
    cout << endl;
    
    int *min, * max;
    min = &arr[4];
    max = &arr[0];
    
    for (int i = 0; i < size; i ++){
        
        if ( *max < *(arr + i)){
                          
            *max = *(arr + i);
        }
             
	if (*min > *(arr + i)){
                
            *min = *(arr + i);
                
        } 
        
    }
    
  cout << " min = " << *min << "  max = " << *max << endl;
 
 
   
    return 0;
}

