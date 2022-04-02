#include <iostream>
#include <time.h>
#include <stdlib.h>
  
using namespace std;
   
int main(){
srand(time(0));

int m, n;
cout << " Enter the array size  rows:   ";
cin >> m;
cout << "                       columns: ";
cin >> n;    
const int row = m, column = n;
int arr[row][column];
for(int i = 0; i < row; i++){
	for(int j = 0; j < column; j++){
		arr[i][j] = rand() % 50;
		cout << arr[i][j] << "  ";
	}
	cout << endl;
}

for (int i = 0; i < row ; i++){
	int max = arr[i][0]; 
        int min = arr[i][0]; 
        int jmax = 0, jmin = 0, temp = 0;
        for(int j = 0; j < column ; j++){
		if ( max < arr[i][j]){
                	max = arr[i][j];
			jmax = j;
         	}
	 	if (min > arr[i][j]){
                	min = arr[i][j];
                	jmin = j;
         	}
        }
        temp = arr[i][jmin];
        arr[i][jmin] = arr[i][jmax];
        arr[i][jmax] = temp;
}

cout << endl;
  
for(int i = 0; i < row; i++){
	for(int j = 0; j < column; j++){
		cout << arr[i][j] << "  ";
	}
	cout << endl;
}

return 0;
}
    
