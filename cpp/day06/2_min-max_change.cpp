#include <iostream>
#include <time.h>
#include <stdlib.h>
  
using namespace std;

void MinMax(int **arr, int row, int column) {
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
}

void print (int **arr, int row, int column){
	for(int i = 0; i < row; i++){
		for(int j = 0; j < column; j++){
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
}
   
int main(){
srand(time(0));

int row, column;
cout << " Enter rows:   ";
cin >> row;
cout << " Enter column: ";
cin >> column;

int** arr = new int* [row];

for(int** ptr = arr; ptr < arr + row; ptr++){
	*ptr =  new int [column];
	for(int *ptr1 = *ptr; ptr1 < *ptr + column; ptr1++) {
		*ptr1 = 1 + rand() % 10;
	}
}

print(arr,row, column);
MinMax(arr,row,column);
cout << endl;
print(arr,row, column);

return 0;
}
   
