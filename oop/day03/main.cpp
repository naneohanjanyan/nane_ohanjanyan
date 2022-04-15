#include <iostream>
#include "poly.h"

using namespace std;


int main() {

cout << " Number to multiply: ";
int number;
cin >> number;

int degree1, degree2;
cout << " degree1 = ";
cin >> degree1;
int *arr1 = new int [degree1 + 1];
cout << " Coefficents: \n";
for(int i = degree1; i >= 0; --i) {
	cout << " x^" << i << ": ";
	cin >> arr1[i];
}
Polynomial p(arr1, degree1 + 1);
cout << " Polynomial 1 = ";
p.print();

cout << " degree2 = ";
cin >> degree2;
int *arr2 = new int [degree2 + 1];
cout << " Coefficents: \n";
for(int i = degree2; i >= 0; --i) {
	cout << " x^ " << i << ": ";
	cin >> arr2[i];
}
Polynomial q(arr2, degree2 + 1);
cout << " Polynomial 2 = ";
q.print();

cout << " poly1 + poly2 = " ;
Polynomial answer;
answer = p + q;
answer.print();

cout << " poly1 - poly2 = " ;
answer = p - q;
answer.print();

cout << " poly1 * poly2 = " ;
answer = p * q;
answer.print();


return 0;
}
