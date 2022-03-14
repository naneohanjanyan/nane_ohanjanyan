#include <iostream>

using namespace std;

void sum(int *ptr) {
	
	int amount = 0;

	for( int i = 0; i < 5; i++){
       	
		amount += *(ptr + i);
	}
  
	cout << " sum = " << amount;
}

int main() {
	int arr[5] = {1,2,8,0,6}, amount;
	int * ptr;
	ptr = arr;
    
	for(int i = 0; i < 5; i++) {
        
		cout << arr[i] << "  ";
    	}
   	
	cout << endl;
    	
	sum(ptr);
   
    
    return 0;
}
