#include <iostream>
using namespace std;

int FindNumber (int remember_num){
	int find_num;
	do{
		cout << "\n Number = ";
		cin >> find_num ;
		if(remember_num < find_num) {
			cout << " Remember number < " << find_num;
		} else if (remember_num > find_num) { 
			cout << " Remember number > " << find_num;
		}
	} while (remember_num != find_num);
	if (remember_num == find_num) {
		cout << " It's correct number, number = " << find_num << "\n";;
	}
return 0;

}

int main () {
int remember_num;
cout << " Remember number: ";
cin >> remember_num;
while ( remember_num <=0 || remember_num >=100){
	cout << "\n Remember number (0 <= number <= 100): ";
	cin >> remember_num;
}
return FindNumber (remember_num);

}
