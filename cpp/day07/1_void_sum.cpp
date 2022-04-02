#include <iostream>

using namespace std;

void sum1(int *num1, int *num2, int * sum) {
	*num1 = 2;
	*sum = *num1 + *num2;
	cout << " sum 1: " << *num1 << " + " << *num2  << " = " << *sum << endl;
}

void sum2(int &num1, int &num2, int &sum) {
	num2 = 0;
	num1 = 41;
	sum = num1 + num2;
	cout << " sum 2: " << num1 << " + " << num2 << " = " << sum <<   endl;
}

void sum3(int num1, int num2, int &sum) {
	num1 = 9;
	sum = num1 + num2;
	cout << " sum 3: " << num1 << " + " << num2 << " = " << sum <<  endl;
}

void sum4(int num1, int *num2, int &sum) {
	num1 = 7;
	*num2 = 8;
	sum = num1 + *num2;
	cout << " sum 4: " << num1 << " + " << *num2 << " = " << sum << endl;
}

void sum5(int *num1, int *num2, int &sum) {
	*num1 = 5;
	*num2 = 12;
	sum = *num1 + *num2;
	cout << " sum 5: " << *num1 << " + " << *num2 << " = " << sum << endl;
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
