#include<iostream>
using namespace std;

void swap(int *x,int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
   
int num1 = 25 , num2 = 50 ;
cout << " number 1 = ";
cin >> num1;
cout << " number 2 = ";
cin >> num2;
    
swap(&num1,&num2);
cout << " After swap: number 1 = " << num1 << " number 2 = " << num2 << endl;
  

return 0;
}

