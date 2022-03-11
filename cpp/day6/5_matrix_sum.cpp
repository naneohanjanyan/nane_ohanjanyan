#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
     srand(time(0));
     const int m = 3;
     int arr1[m][m], arr2[m][m], sum[m][m];
     
     cout << " matrix 1: \n";
   
   for(int i = 0; i < m; i++){
        
        for(int j = 0; j < m; j++){
            
            arr1[i][j] = 1 + rand() % 10;
            
            cout << arr1 [i][j] << "  ";
        }
        
         cout << endl;
         
    }
    
    cout << endl << " matrix 2: \n";
    
    for(int i = 0; i < m; i++){
        
        for(int j = 0; j < m; j++){
            
            arr2[i][j] = 1 + rand() % 10;
            
            cout << arr2 [i][j] << "  ";
        }
        
         cout << endl;
   } 

   cout << endl << " matrix 1 + matrix 2 = \n";
   
     for(int i = 0; i < m; i++){
        
        for(int j = 0; j < m; j++){
            
            sum[i][j] = arr1[i][j] + arr2[i][j];
            
             cout << sum [i][j] << "  ";
        }
        
         cout << endl;
   }

return 0;
} 
