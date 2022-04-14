#ifndef POLYNOMIAL
#define POLYNOMIAL

class Polynomial {
	private:
		int * _coeff;
		int _arrSize;
	public:
		Polynomial();
		Polynomial(int degree);
		Polynomial(int *coefficientArr, int coefficientCount);
		Polynomial(Polynomial& other);
//		~Polynomial();
	//	Polynomial MultiplyByNumber(Polynomial &other);
		Polynomial Add(Polynomial &other);
		Polynomial Subtract(Polynomial &other);
		Polynomial Multiply(Polynomial &other);
		int degree();
		void print();
};

#endif
