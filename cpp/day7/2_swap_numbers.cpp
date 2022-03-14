#include<iostream>

using namespace std;

void swap(int *x,int *y) {
    
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}


int main() {
    
    int num1 = 25 , num2 = 50 ;
    cout << "number 1 = " << num1 << " number 2 = " << num2 << endl;
    
    swap(&num1,&num2);

    cout << "number 1 = " << num1 << " number 2 = " << num2 << endl;
    

return 0;
}

