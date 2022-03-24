#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(0));
    
   const int m = 3;
   
   int arr[m][m];
   
   int sum4 = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum5 = 0, sum6 = 0, sum7 = 0, sum8 = 0;
   
   for(int i = 0; i < m; i++){
        
        for(int j = 0; j < m; j++){
            
            arr[i][j] = 1 + rand() % 10;
            
            cout << arr [i][j] << "  ";
        }
        
         cout << endl;
         
    }
        
        
    for(int i = 0; i < m; i++){
        
        for(int j = 0; j < m; j++){
           
            if (i + j < m -1){ 
                   
                sum1 += arr[i][j];
            }

            if (i+ j > m -1){ 
                   
                sum2 += arr[i][j]; 
            }

            if ( i > j){ 
               
                sum3 += arr[i][j]; 
            }
                
            if(i < j){
                
                sum4 += arr[i][j]; 
            }
                
            if(i < j && i + j < m - 1){
                   
                sum5 += arr[i][j];
            }
               
            if(i > j && i + j < m - 1){
              
                sum6 += arr[i][j];
            } 
            
            if(i > j && i + j > m - 1){
                  
                sum7 += arr[i][j];
            } 
                
            if(i < j && i + j > m - 1){
             
                sum8 += arr[i][j];
            } 
        }
    }


    cout << " above the secondary diagonal = " << sum1 << endl;
    cout << " below the secondary diagonal = " << sum2 << endl;
    cout << " below the main diagonal = " << sum3 << endl;
    cout << " above the main diagonal = " << sum4 << endl;
    cout << " small triangle above = " << sum5 << endl;
    cout << " small triangle on the left = " << sum6 << endl;
    cout << " small triangle inside = " << sum7 << endl;
    cout << " small right triangle = " << sum8 << endl;
    
 return 0;
}

 
