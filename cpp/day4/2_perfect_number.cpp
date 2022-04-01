#include <iostream>

using namespace std;

void check ( int number ){
	int sum = 0;
	if (number > 0) {
		for (int  divider = 1; divider != number; divider++) {
			if ( number % divider == 0){
				sum += divider;
			}
		}
		if ( number == sum){
			cout << " This is a perfect number " << endl;
		} else {
			cout << " This is not a perfect number \n";
		}
	} else { 
		cout << " Number <= 0 \n";
	}
}

int main () {

int number;
cout << " Enter the number: ";  
cin >> number;

check (number);
 
return 0;
}
