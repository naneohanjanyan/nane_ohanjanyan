#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
    
srand(time(0));
    
	const int row = 17, column = 4;
   	int arr[row][column];

    	for(int i = 0; i < row; i++) {
        	cout << i+1 <<".  " ; 
        	for(int j = 0; j < column; j++) {
            
            		arr[i][j] = 1+ rand() % 10;
            		cout <<  arr [i][j] << "  ";
        	}	
        	 cout << endl;
   	}

	cout << endl;
	   
   	

	for( int i = 0; i < row; i++) {
        
		int j;
		for(j = 0; j < column; j++) {
            
            		if(arr[i][j] % 2 != 0) break;
            
			else if(j == column - 1 && arr[i][j] % 2 == 0) {
                
                		cout << " Even line number: " <<  i + 1 << endl;
                        	return 0;
             
             		}
            	}
         
		if ( i == row - 1 && arr[i][j] % 2 != 0 ){
                	
			 cout << " No \n";
                	 return 0;
		}
  	}

 return 0;
}
