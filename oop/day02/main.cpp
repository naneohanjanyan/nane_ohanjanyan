#include <iostream>
#include "polyinomial.h"

using namespace std;

int newPolynomial(int max_degree);

int main() {

int Operator;
cout << "1.Add  2.Subtract  3.Multiply By Number (1/2/3)\n";
cin >> Operator;
int _degree1, _degree2;
int *arr1;
int *arr2;

Polynomial call(_degree1, _degree2, arr1, arr2);
if(Operator == 1 || Operator == 2 ) {
	cout << " degree1 = ";
	cin >> _degree1;
	cout << " degree2 = ";
	cin >> _degree2;
	arr1 = new int [_degree1 + 1];
	cout << " Coefficents: \n";
	for(int i = _degree1; i >= 0; --i) {
		cout << "arr1 [" << i << "] = ";
		cin >> arr1[i];
	}
	arr2 = new int [_degree2 + 1];
	cout << " Coefficents: \n";
	for(int i = _degree2; i >= 0; --i) {
		cout << "arr2 [" << i << "] = ";
		cin >> arr2[i];
	}
	if(Operator == 1) call.Add();
	if(Operator == 2 ) call.Subtract();
}
if(Operator == 3 ) {
	cout << " degree1 = ";
	cin >> _degree1;
	cout << " degree2 = ";
	cin >> _degree2;
	arr1 = new int [_degree1 + 1];
	cout << " Coefficents: \n";
	for(int i = _degree1; i >= 0; --i) {
		cout << "arr1 [" << i << "] = ";
		cin >> arr1[i];
	}
	call.MultiplyByNumber();
}
/*switch(Operator) {
	case 1:
		result = poly1.Add(poly2, _degree1, _degree2);
		poly1.print();
		cout << "+ ";
       		poly2.print();
		cout << " = ";
		result.print();
		break;
	case 2:
		result = poly1.Subtract(poly2, _degree1, _degree2);
		poly1.print();
		cout << " - ";
       		poly2.print();
		cout << " = ";
		result.print();
		break;
       	case 3:
		cout << " Number multiplier: ";
		int num;
		cin >> num;
		result = poly1.MultiplyByNumber(num, _degree1);
		poly1.print();
		result.print();
		break;
}        
*/
cout << endl;
 return 0;
}
/*
int NewPolynomial(int max_degree) {
	int* arr = new int [max_degree + 1];
	cout << " Coefficents: \n";
	for(int i = max_degree; i >= 0; ++i) {
		cout << "arr [" << i << "] = ";
		cin >> arr[i];
    }
    Polynomial obj(max_degree, arr);
    return obj;
}*/
