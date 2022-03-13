#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(0));
    
   const int m = 3;
   
   int arr[m][m], sums[8];
   
   int sum4 = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum5 = 0, sum6 = 0, sum7 = 0, sum8 = 0;
   
   for(int i = 0; i < m; i++){
        
        for(int j = 0; j < m; j++){
            
            arr[i][j] = 1 + rand() % 5;
            
            cout << arr [i][j] << "  ";
        }
        
         cout << endl;
         
   }
        
        
    for(int i = 0; i < m; i++){
        
        for(int j = 0; j < m; j++){
           
            if (i + j < m -1){ 
                   
                sum1 += arr[i][j];
                sums[0]= sum1;
            }

            if (i+ j > m -1){ 
                   
                sum2 += arr[i][j]; 
                sums[1] = sum2;
            }

            if ( i > j){ 
               
                sum3 += arr[i][j]; 
                sums[2] = sum3;
            }
                
            if(i < j){
                
                sum4 += arr[i][j]; 
                sums[3] = sum4;
            }
                
            if(i < j && i + j < m - 1){
                   
                sum5 += arr[i][j];
                sums[4]= sum5;
            }
               
            if(i > j && i + j < m - 1){
              
                sum6 += arr[i][j];
                sums[5] = sum6;
            } 
            
            if(i > j && i + j > m - 1){
                  
                sum7 += arr[i][j];
                sums[6] = sum5;
            } 
                
            if(i < j && i + j > m - 1){
             
                sum8 += arr[i][j];
                sums[7] = sum8;
            } 
        }
    }

    for(int i = 0; i < 8; i++){
        
        cout << " sum " << i + 1 << " = "  << sums[i]  <<  ";  ";
    }
    
    cout << endl;
    
 return 0;
}
