#include <iostream>
#include "polynomial.h"

using namespace std;

Polynomial::Polynomila() {
	_arrSize = 1;
	_coeff = new int [1];
	_coeff[0] = 0;
}

Polynomial::Polynomial(int degree) {
	_arrSize = degree + 1;
	_coeff = new int[_arrSize];
	for(int i = 0; i < _arrSize; i++) {
		_coeff[i] = 0;
	}
}

Polynomial::Polynomial(int *coefficientArr, int coefficientCount) {
	_arrSize =  coefficientCount;
	_coeff = new int [coefficientCount];
	for(int i = 0; i < coefficientCount; i++) {
		_coeff[i] = coefficientArr[i];
	}
}
// copy constructor
Polynomial::Polynomial(Polynomial &other) {
	_arrSize = other._arrSize;
	_coeff = new int [_arrSize];
	for(int i = 0; i < _arrSize; i++) {
		_coeff[i] = other._coeff;
	}
}
// destructor
Polynomial::~Polynomial() {
	delete[] _coeff;
	_arrSize = 0;
	_coeff = nullptr;
}
 void Polynomial::Add(Polynomial &other) {
	int sizeOfArr = (_arrSize >= other._arrSize) ? _arrSize : other._arrSize;
	Polynomial answer(sizeOfArr - 1);
	if(_arrSize >= other._arrSize) {
		for(int i = 0; i < other._arrSize; i++) {
			aswer._coeff[i] = _coeff[i] + other._coeff[i];
		} 
		for(int i = other._arrSize; i <_arrSize; i++) {
			aswer._coeff[i] = _coeff[i];
		} 
	} else {
		for(int i = 0; i < _arrSize; i++) {
			aswer._coeff[i] = _coeff[i] + other._coeff[i];
		} 
		for(int i = _arrSize; i < other._arrSize; i++) {
			aswer._coeff[i] = other._coeff[i];
		} 
	}
	return answer;
	
}

void Polynomial::Subtract(Polynomial &other) {
	int sizeOfArr = (_arrSize >= other._arrSize) ? _arrSize : other._arrSize;
	Polynomial answer(sizeOfArr - 1);
	if(_arrSize >= other._arrSize) {
		for(int i = 0; i < other._arrSize; i++) {
			aswer._coeff[i] = _coeff[i] - other._coeff[i];
		} 
		for(int i = other._arrSize; i <_arrSize; i++) {
			aswer._coeff[i] = _coeff[i];
		} 
	} else {
		for(int i = 0; i < _arrSize; i++) {
			aswer._coeff[i] = _coeff[i] - other._coeff[i];
		} 
		for(int i = _arrSize; i < other._arrSize; i++) {
			aswer._coeff[i] = other._coeff[i];
		} 
	}
	return answer;
	
}
Polynomial:: Multiplay(Polynomial &other) {
	int degreeOfAnswer = _arrSize + othet._arrSize - 2;
	Polynomial answer (degreeOfAnswer);
	for(int i = 0; i < _arrSize; i++) {
		for(int j = 0; j < other._arrSize; j++) {
			answer._arrSize[i+j] += (_coeff[i] * other._coeff[j]);
		}
	}
	return 0;
}

/*
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
*/
