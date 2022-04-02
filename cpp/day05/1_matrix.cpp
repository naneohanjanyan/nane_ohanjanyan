#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main() {
srand(time(0));
int m;
cout << " Input array size: ";
cin >> m;
const int size = m;
int arr[size][size];
int sum[8] = {0};
for(int i = 0; i < size; i++){
	for(int j = 0; j < size; j++){
		arr[i][j] = 1 + rand() % 10;
		cout << " " << arr [i][j] << "  ";
	}
	cout << endl;
}
cout << "\n";
for(int i = 0; i < size; i++){
	for(int j = 0; j < size; j++){
		if (i + j < size - 1){ 
			sum[0] += arr[i][j];
		}
		if (i+ j > size -1){ 
			sum[1] += arr[i][j]; 
		}
		if ( i > j){ 
			sum[2] += arr[i][j]; 
		}
		if(i < j){
			sum[3] += arr[i][j]; 
		}
		if(i < j && i + j < size - 1){
			sum[4] += arr[i][j];
		}
		if(i > j && i + j < size - 1){
			sum[5] += arr[i][j];
		} 
		if(i > j && i + j > size - 1){
			sum[6] += arr[i][j];
		} 
		if(i < j && i + j > size - 1){
			sum[7] += arr[i][j];
		} 
	}
}
cout << " Top Left:     " << sum[0] << endl;
cout << " Bottom Right: " << sum[1] << endl;
cout << " Bottom Left : " << sum[2] << endl;
cout << " Top Right:    " << sum[3] << endl;
cout << " Top Small:    " << sum[4] << endl; 
cout << " Left Small:   " << sum[5] << endl;
cout << " Bottom Small: " << sum[6] << endl;
cout << " Right Small:  " << sum[7] << endl;

 return 0;
}


