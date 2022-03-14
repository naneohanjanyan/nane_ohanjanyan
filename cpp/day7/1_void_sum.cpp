#include <iostream>

using namespace std;

void sum1(int *a, int *b, int * sum) {
    *a = 2;
    *sum = *a + *b;
    cout << " sum 1: " << *a << " + " << *b  << " = " << *sum << endl;
}

void sum2(int &a, int &b, int &sum) {
  
    b = 0;
    a = 41;
    sum = a + b;
    cout << " sum 2: " << a << " + " << b << " = " << sum <<   endl;
}

void sum3(int a, int b, int &sum) {
    
    a = 9;
    sum = a + b;
    cout << " sum 3: " << a << " + " << b << " = " << sum <<  endl;
}

void sum4(int a, int *b, int &sum) {
    a = 7;
    *b = 8;
    sum = a + *b;
    cout << " sum 4: " << a << " + " << *b << " = " << sum << endl;
}

void sum5(int *a, int *b, int &sum) {
    
    *a = 5;
    *b = 12;
    sum = *a + *b;
    cout << " sum 5: " << *a << " + " << *b << " = " << sum << endl;
}
int main () {
  
   int num1 = 10 , num2 = 20, sum = 0;
     
     sum1(&num1, &num2, &sum);
     sum2(num1, num2, sum);
     sum3(num1, num2, sum);
     sum4(num1, &num2, sum);
     sum5(&num1, &num2, sum);
     
     
return 0;

}
