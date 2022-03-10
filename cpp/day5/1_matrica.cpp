#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(0));
    
   const int m = 4;
   
   int arr[m][m];
   
   int sum = 0, sum1 = 0, sum2 = 0, sum3 = 0;
   
   for(int i = 0; i < m; i++){
        
        for(int j = 0; j < m; j++){
            
            arr[i][j] = 1 + rand() % 5;
            
            cout << arr [i][j] << "  ";
        }
        
         cout << endl;
         
   }
        
        for(int i = 0; i < m; i++){
        
             for(int j = 0; j < m; j++){
           
                if (i != j && i + j != m -1){ 
                    
                    sum += arr[i][j];
            
                }

                if (i != j){ 
                    
                    sum += arr[i][j];
            
                }

                if ( i + j != m -1){ 
                   
                    sum += arr[i][j];
            
                }
            }
        }
            cout << " sum = " << sum << endl;
          
          
    
   
    return 0;
}

