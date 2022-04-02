#include <iostream>
using namespace std;

int main () {
int remember_num, find_num;
cout << " Remember number:";
cin >> remember_num;
while ( remember_num <= 0 ||  remember_num >= 100) {
	cout << "\n Remember number: ";
	cin >> remember_num;
}

do {
	cout << "\n Number = ";
	cin >>  find_num;
	if( remember_num <  find_num) {
		cout << " a < " <<  find_num;
	} else if ( remember_num >  find_num) {
		cout << "  remember_num > " << find_num;
	}
} while ( remember_num != find_num);

return 0;
}


