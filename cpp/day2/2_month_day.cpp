#include <iostream>

using namespace std;

int main ()

{

int monthnum;

cout << " Input month number: ";

cin >> monthnum;

switch (monthnum){

        case 1:

        case 3:

        case 5:

        case 7:

        case 8:

        case 10:

        case 12:

                cout << " Total number of day = 31 \n ";

        break;

        case 2:

                cout << " Total number of day = 28 or 29 \n ";

        break;

        case 4:

        case 6:

        case 9:

        case 11:

                cout << " Total number of day = 30 \n ";

        break;

        default:

                cout << " It's not a month \n";
}

return 0;

}
