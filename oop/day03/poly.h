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
		Polynomial operator+( const Polynomial &other) const; 
		Polynomial operator-( const Polynomial &other) const; 
		Polynomial operator*( const Polynomial &other) const; 
		Polynomial &operator+=( const Polynomial &other);
		Polynomial &operator-=( const Polynomial &other);
		Polynomial &operator*=( const Polynomial &other);
		int degree();
		void print();
};
#endif
