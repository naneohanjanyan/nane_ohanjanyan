#include <iostream>
#include <cstring>
#include "human.h"

using namespace std;

HomoSapience :: Think() {
	string think;
	bool command;
	do {
		getline(cin, think);
		cout << " Coutinue think (1/0)?";
		cin >> command;
	} while(command);
	
}

Programmer :: WriteCode() {
	string code;
	cout << " Write your code:\n ";
	getline(cin, code);
}
	
		
