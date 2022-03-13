#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){
    
    srand(time(0));
    
   const int row = 3, column = 4;
   int arr[row][column];

    for( int i = 0; i < row; i++){
        
        for(int j = 0; j < column; j++){
            
            arr[i][j] = 1+ rand() % 20;
            
            cout << arr [i][j] << "  ";
        }
        
         cout << endl;
         
   }
   
   cout << endl;
  
   int rowCount = 0;
    
    for(int i = 0; i < row; i++){
        
        int columnCount = 0;
        
        for(int j = 0; j < column; j++){
          
            if(arr[i][j] % 2 == 0) {
              
                columnCount++;
                
                if(columnCount == j){
                  
                  columnCount = arr[i][j];
                }
            }     
            
        }
        
        if(columnCount == column){
           
            cout << " The number of the first even line = " << i+1 << endl;
            break;
            rowCount = i-1;
        
        } else if( rowCount == row - 1){
            
                  cout << "NO" << endl;
        }
          
         rowCount++;
         
   }



return 0;
}
