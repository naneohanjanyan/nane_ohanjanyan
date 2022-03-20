#include <iostream>

using namespace std;

int
main () {

int x1, x2, x3, x4, y1, y2, y3, y4;

cout << " Input Coordinates of A:\n";
cin >> x1 >> y1;

cout << " Input Coordinates of B:\n";
cin >> x2 >> y2;

cout << " Input Coordinates of C:\n";
cin >> x3 >> y3;

cout << " Input Coordinates of D:\n";
cin >> x4 >> y4;
  
if(x3 == x4 && y1 == y2 ) {
	cout << " Yes \n";
} else {
	cout << " NO \n";
}
 
  return 0;
}
