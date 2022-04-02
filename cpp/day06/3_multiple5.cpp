#include <iostream>
#include <math.h>

using namespace std;
int main () {
int size;
cout << " Enter size: ";
cin >> size;
int *arr = new int [size];

for (int i = 0; i < size; i++) {
        arr[i] = 5 * pow(i + 1, 2);
        cout << 2 * (i + 1) << "*" <<2 * (i + 1)  << " + " << (i + 1) << "*"  << (i + 1)<< " = " << arr[i] << endl;
    }

return 0;    
}
