#include <iostream>

using namespace std;

 void bin (int num){
    
    while (num != 0){
    
    cout << num % 2;
    
    num /= 2;
    }
}

int main() {
   
    int num;

    cin >> num; 
    
    bin (num);
  
    cout << endl;

    
    return 0;
}

