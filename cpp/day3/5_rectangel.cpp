#include <iostream>

using namespace std;

  int parameters ( int a, int b){

	 int perimeter = 0, area = 0;
	
	 perimeter = (2 * a) + (2 * b);

 	cout << " perimeter = " << perimeter;

 	area = a * b;

 	cout << " area = " << area << "\n";

  return 0;

  }

int main()
{

	return parameters (5, 8);

}
