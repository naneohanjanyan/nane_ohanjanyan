using namespace std;
#ifndef POLYNOMIAL
#define POLYNOMIAL

class Polynomial {
	private:
		int _degree1, _degree2;
		int *arr1 = new int[_degree1 + 1];
		int *arr2 = new int[_degree2 + 1];
		int *result;
	public:
		void MultiplyByNumber();
		void Add();
		void Subtract();
		Polynomial(int degree1, int degree2, int Arr1[], int Arr2[]){
			_degree1 = degree1;
			_degree2 = degree2;
			int result_arr_size;
			if(degree1 < degree2) {
				result_arr_size = degree2;
			} else {
				result_arr_size = degree1;
			}
			result = new int [result_arr_size];

			for(int i = 0; i <= degree1; i++) {
				*(arr1 + i) = Arr1[i];
			}
			for(int i = 0; i <= degree2; i++) {
				*(arr2 + i) = Arr2[i];
			}
		}
		~Polynomial() {
		}
};

#endif
