#include <iostream>
using namespace std;

void sort(int arr[], int size) {
	int element = 0, max_len = 0, first_el = 0;
	for(int i = 0; i < size; i++){
        	int count = 0;
        	for( int j = i; j < size - 1; j++){
			if(arr[j] > arr[j + 1]){
                		break;
            		} else {
                		count ++;
            		}
        	}
        	element = count;
            	if(element > max_len){
                	max_len = element;
                	first_el = i;
            	}
	}
	cout << " The segment with the highest growth rate: ";
	for( int i = first_el; i <= first_el + max_len; i++){
        	cout << arr[i] << "  ";
	}
	cout << endl;
}

int main() {
 
int size;
cout << " Enter array size: ";
cin >> size;
int *arr = new int [size];
cout << " Enter array elements: \n";
for(int i = 0; i < size; i++) {
	cout << "arr[" << i << "] = ";
	cin >> arr[i];
}
    
sort(arr, size);
    
return 0;
}
