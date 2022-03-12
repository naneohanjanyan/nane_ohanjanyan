#include <iostream>
#include <time.h>
#include <stdlib.h>
  
using namespace std;
   
int main(){
       
   const int m =4, n =5;
   int arr[m][n];
         
    for(int i = 0; i < m; i++){

        for(int j = 0; j < n; j++){
  
      	    arr[i][j] = rand() % 50;
  
            cout << arr[i][j] << "  ";
 
          }
         cout << endl;
     }
     
    for (int i = 0; i < m ; i++){
        
         int max = arr[i][0]; 
         int min = arr[i][0]; 
         int jmax = 0, jmin = 0, temp = 0;
        
         for(int j = 0; j < n ; j++){
                       
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
  
  for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
  
            cout << arr[i][j] << "  ";
        
        }
        cout << endl;
   }
  
      return 0;
  }
    
