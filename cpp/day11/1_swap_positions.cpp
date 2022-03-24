#include <iostream>

using namespace std;

int main() {
int number, count = 0;
cout << " Input number: ";
cin >> number;
int num = number;

while(number != 0){
	number /= 10;
	count ++;
} 

const int size = count;
int arr[size];

for(int i = 0; i < size; i++){
	arr[size - i - 1] = num % 10;
	num /= 10;
}

int pos1, pos2;
cout << " Input positions to swap(0 < positions < " << count << ") \n position 1: ";
cin >> pos1;
cout << " position 2: ";
cin >> pos2;

if(pos1 > 0 && pos1 <= size && pos2 > 0 && pos2 <= size ) {
	int swap;
	swap = arr[pos1 - 1];
	arr[pos1 - 1] = arr[pos2 - 1];
	arr[pos2 - 1] = swap;
	cout << " Output: ";
	for(int i = 0; i < size; i++){
		cout << arr[i];
	}
    	cout << endl;
} else {
	cout << " Positions do not belong to the given range \n";
}

return 0;
}
