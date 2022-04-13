#include <iostream>
#include "polynomial.h"

using namespace std;
void Polynomial::Add() {
	if (_degree1 == _degree2 ) {
		for (int i = 0; i <= _degree1; i++) {
			result[i] = arr1[i] + arr2[i];
			cout << result[i] << "x^" << i << " + ";
		}
	} else if ( _degree1 > _degree2) {
		for(int i = 0; i <= _degree1; i++) {
			if( i <= _degree2) {
				result[i] = arr1[i] + arr2[i];
			} else {
					result[i] = arr1[i];
 			}		
			cout << result[i] << "x^" << i << " + ";

		}
	} else if(_degree2 > _degree1) {
		for(int i = 0; i <= _degree1; i++) {
			if( i <= _degree1) {
				result[i] = arr1[i] + arr2[i];
			} else {
				result[i] = arr2[i];
 			}
			cout << result[i] << "x^" << i << " + ";
		}
	}
}

void Polynomial ::Subtract() {
	if (_degree1 == _degree2 ) {
		for (int i = 0; i <= _degree1; i++) {
			result[i] = arr1[i] - arr2[i];	
			cout << result[i] << "x^" << i << " - ";

		}
	} else if ( _degree1 > _degree2) {
		for(int i = 0; i <= _degree1; i++) {
			if( i <= _degree2) {
				result[i] = arr1[i] - arr2[i];
			} else {
					result[i] = arr1[i];
 			}
			cout << result[i] << "x^" << i << " - ";
		}
	} else if(_degree2 > _degree1) {
		for(int i = 0; i <= _degree1; i++) {
			if( i <= _degree1) {
				result[i] = arr1[i] - arr2[i];
			} else {
				result[i] = arr2[i];
 			}
			cout << result[i] << "x^" << i << " - ";

		}
	}
}

void Polynomial::MultiplyByNumber() {
	int number;
	cin >> number; 
	cout << number << "*( ";
	for(int i = _degree1; i >= 0; i--) {
		cout << arr1[i] << "x^" << i << " + ";
        } 
	cout << ") = ";
	for (int i = 0; i <= _degree1; i++) {
		result[i] = number * arr1[i];
		cout << result[i] << "x^" << i << " + ";
	}
}

