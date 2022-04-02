#include <iostream>

using namespace std;

int main() {

int length, width;
int perimeter = 0, area = 0;
cout << " length = ";
cin >> length;

cout << " width = ";
cin >> width;

perimeter = (2 * length) + (2 * width);
cout << " perimeter = " << perimeter;

area = length * width;
cout << " area = " << area << "\n";

    return 0;
}

