#include <iostream>
using namespace std;
int main() {
int s;
cout << " Array size: ";
cin >> s;
const int size = s;
int arr[size][size];
int value = 1, j, k;

for (int k = 1; k <= size; k++) {
	for (int j = k - 1; j < size - k + 1; j++) {
		arr[k - 1][j] = value++;
	}
	for (int j = k; j < size - k + 1; j++) {
		arr[j][size - k] = value++;
	}
	for (int j = size - k - 1; j >= k - 1; --j) {
		arr[size - k][j] = value++;
	}
	for (int j = size - k - 1; j >= k; j--) {
		arr[j][k - 1] = value++;
	}
}

for (int i = 0; i < size; i++) {
	for (j = 0; j < size; j++) {
		if (arr[i][j] <= 9) {
			cout << arr[i][j] << "  ";
		} else {
			cout << arr[i][j] << " ";
		}
		if (j == size - 1) { 
			cout << "\n";
		}
	}
}
	return 0;
}
