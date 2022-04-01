#include <iostream>
using namespace std;

void parameters ( int length, int width){
	int perimeter = 0, area = 0;
	perimeter = (2 * length) + (2 * width);
	cout << " perimeter = " << perimeter;
	area = length * width;
	cout << " area = " << area << "\n";
 }

int main() {
int length, width;
cout << " length = ";
cin >> length;
cout << " width = ";
cin >> width;
parameters(length, width);	
return 0;

}
