#include <iostream>

using namespace std;
 
int main()
{
    const int size = 5; 
    int value = 1;
    int arr[size][size];
    
    
    for(int i = 0; i < size / 2; i++){
        for(int j = i; j < size - i; j++){  
           
            arr[i][j] = value;
            value++;
        }
        
        for(int j = 1; j < size - i - i; j++){   
            
            arr[j + i][(size - i) - 1] = value;   
            value++;
        }
        for(int j = (size - 2) - i; j >= i; j--){  
            
            arr[(size - i) - 1][j] = value;            
            value++;
        }
        for(int j = ((size - i) - 2); j > i; j--){
            
            arr[j][i] = value;
            value++;
        }
    }
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1; j++){
           
            cout << arr[i][j] << " " ;
        }
       
       cout << arr[i][size - 1] << endl;
    }

    return 0;

}
