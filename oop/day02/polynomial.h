using namespace std;
#ifndef POLYNOMIAL
#define POLYNOMIAL

class Polynomial {
	private:
		int * _coeff;
		int _arrSize;
	public:
		Polynomial();
		Polynomial(int *coefficientArr, int coefficientCount);
		Polynomial(Polyomial& other);
		~Polynomial();
		Polynomial MultiplyByNumber(Polyomial &other);
		Polynomial Add(Polyomial &other);
		Polynomial Subtract(Polyomial &other);
		Polynomial Multiply(Polyomial &other);
		int degree();
		void print();
};

#endif
