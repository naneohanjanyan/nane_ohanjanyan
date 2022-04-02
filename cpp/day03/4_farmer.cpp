#include <iostream>

using namespace std;

int farm ( int chickens, int cows, int pigs) {
	int sum = 0;
	sum = 2 * chickens + 4 * cows + 4 * pigs;
	cout << " Resulat = " << sum << "\n";  

   return sum;

  }


int main() {

int chickens, cows, pigs;
cout << " chickens = ";
cin >> chickens;
cout << " cows = ";
cin >> cows;
cout << " pigs = ";
cin >> pigs;    

return farm (chickens, cows, pigs);

}
