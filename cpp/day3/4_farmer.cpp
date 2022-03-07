#include <iostream>

using namespace std;

  int farm ( int chickens, int cows, int pigs) {
  
  int sum = 0;

	 
	sum = 2 * chickens + 4 * cows + 4 * pigs;

	cout << " Resulat = " << sum << "\n";  

   return 0;

  }




int main()
{
    
	return farm (2, 4, 1);

}
