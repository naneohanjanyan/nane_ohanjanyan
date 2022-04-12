#include <iostream>
#include <math.h>
using namespace std;

class Polynomial {
	private:
		int _number;
		int _pow;
		string _operator;
	public:
		Polynomial(int num, int Pow, string Operator) {
			_number = num;
			_pow = Pow;
			_operator = Operator;
		}
		int Add() {
			string result;
			int sum = 0;
			int pow_ = _pow;
			int coefficient;
			cout << " Coefficient: ";
			cin >> coefficient;
			while(pow_ > 0) {
				sum +=  coefficient * (pow(_number, pow_));
				result += (to_string(coefficient) + " * " +  to_string(_number) + " ^ " + to_string(pow_)) + " + " ;
				pow_ --;
				coefficient --;
			}
			cout << result.substr(0, result.length() - 1)  << " = ";
			return sum;
		}
		int Subtract() {
			string result;
			int sub = 0;
			int pow_ = _pow;
			int coefficient;
			cout << " Coefficient: ";
			cin >> coefficient;
			while(pow_ > 0) {
				sub -= coefficient * (pow(_number, pow_));
				result += (to_string(coefficient) + " * " +  to_string(_number) + " ^ " + to_string(pow_)) + " - ";
				coefficient --;
				pow_ --;
			}
			cout << " 0 - " <<  result.substr(0, result.length() - 1)  << " = ";
			return sub;
		}
		int Multiply() {
			string result;
			int mult = 1;
			int pow_ = _pow;
			int coefficient;
			cout << " Coefficient: ";
			cin >> coefficient;
			while(pow_ > 0) {
				mult *= ( coefficient * pow(_number, pow_));
				result += (to_string(coefficient) + " * " +  to_string(_number) + " ^ " + to_string(pow_)) + " * " ;
				pow_ --;
				coefficient --;

			}
			cout << result.substr(0, result.length() - 1)  << " = ";
			return mult;
		}

};

int main(){
 int num, degree;
 string Operator;
 cout << " Enter number: ";
 cin >> num;
 cout << " Enter degree: ";
 cin  >> degree;
 cout << " Enter operator (add/ sub/ mult): ";
 cin >> Operator;
 Polynomial* polynomial = new Polynomial (num, degree, Operator);
 if( Operator == "add") {
	 cout << polynomial -> Add() << endl;
 }
 if ( Operator == "sub") {
	 cout << polynomial -> Subtract() << endl;
 }
 if (Operator == "mult") {
	 cout << polynomial -> Multiply() << endl;
 }



return 0;

}	
