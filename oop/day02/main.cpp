#include <iostream>
#include "polyinomial.h"

using namespace std;

int newPolynomial(int max_degree);

int main() {

int Operator;
cout << "1.Add  2.Subtract  3.Multiply By Number (1/2/3)\n";
cin >> Operator;
int _degree1, _degree2;
cout << " degree1 = ";
cin >> _degree1;
cout << " degree2 = ";
cin >> _degree2;
int *arr1 = new int [_degree1 + 1];
cout << " Coefficents: \n";
for(int i = _degree1; i >= 0; --i) {
	cout << "arr1 [" << i << "] = ";
	cin >> arr1[i];
}

int *arr2 = new int [_degree2 + 1];
cout << " Coefficents: \n";
for(int i = _degree2; i >= 0; --i) {
	cout << "arr2 [" << i << "] = ";
	cin >> arr2[i];
}

Polynomial call(_degree1, _degree2, arr1, arr2);
		if(Operator == 1) call.Add();
	if(Operator == 2 ) call.Subtract();
}
if(Operator == 3 )  call.MultiplyByNumber();

cout << endl;
 return 0;
}

