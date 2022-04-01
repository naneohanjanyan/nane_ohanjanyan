#include <iostream>

using namespace std;

int main () {

int day;
cout << "Input the  week day number  ";
cin >> day;
switch (day){
	case 1:
	cout << " Mondey \n ";
	break;

	case 2:
	cout << " Tuesday \n ";
	break;

	case 3:
	cout << " Wendesday \n ";
	break;

	case 4:
	cout << " Thursday \n ";
	break;

	case 5:
	cout << " Friday \n ";
	break;

	case 6:
	cout << " Saturday \n ";
	break;

	case 7:
	cout << " Sunday \n ";
	break;

	default:
		cout << " It's not the day of the week \n ";
   
}

return 0;
}
