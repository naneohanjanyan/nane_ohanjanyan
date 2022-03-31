#include <iostream>
#include "agent.h"
//#include "client.h"
using namespace std;

int main() {

string user;
cout << "\n Input who connects (agent or client): ";
cin >> user;
if(user == "agent") { 
	cout << "\n You are logged in as an agent \n";
	agent();
}/* else if(user == "client") {
	client();
} else { 
	cout << " This is not a user \n";
}
*/
return 0;
}
