#include <iostream>
#include "my_atoi.h"
using namespace std;

int main (int argc, char *argv[]){
int sum = 0;

if( argc == 3){

sum = my_atoi(argv[1]) + my_atoi(argv[2]);

cout << sum << endl;
}
return 0;
}


