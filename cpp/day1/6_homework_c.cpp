#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int number, faktoryal = 1;
cout << " Number = ";
cin >> number;
while (number > 0){
faktoryal *= number;
number -- ;
}
cout << " Faktoryal = " << faktoryal << "\n";


    return 0;
}
