#include <iostream>

using namespace std;

void triangel1 (int size) {
	for(int i = size ;i >= 1; i--){
		int j = 1;
		for(int j = 1; j <= i; j++){
			cout << '*';
		}
	cout << endl;
	}
}

void triangel2 (int size) {
	for ( int l = 1; l <= size; l++){
		for(int k = size; k >= 1; k--){
			if (k <= l) {
				cout << "*" << " ";
        		} else {
				 cout << " ";
			}
		}
		cout << endl;
	}
}

void triangel3 (int size) {
	for( int i = 1; i <= size; i++){
		for(int j = size; j >= 1; j--){
			if (j <= i) {
				 cout << "*";
			} else {
				 cout << " ";
			}
		}
		cout << endl;
	}
}

void triangel4 ( int size) {
	for ( int i = 1; i <= size; i++ ){
		for( int j = 1; j <= i; j++){
			cout << "*";
		}
	cout << endl;
	}
}

int main () {

int size;
cout << " Input size: ";
cin >> size;

triangel1(size);
cout << endl;

triangel2(size);	
cout << endl;

triangel3(size);
cout << endl;

triangel4(size);
cout << endl;

return 0;

}
