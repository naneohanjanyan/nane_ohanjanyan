#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std; 

void game(int);

int main() {
	srand(time(0));
	cout << " Choose player (user: 1, computer: 2): ";
	int player;
	cin >> player;
	int choose;
	if(player == 1) {
		choose = 1;
	} else if(player == 2) {
		choose = 2;
	}
	game(choose);

return 0;
}

void game(int choose) {
	string city[] = {"washington", "austin", "boston", "chicago", "columbia", "dayton", "denver", "glendale", "hollywood", "los angeles", "miami", "new orleans", "new york", "odessa", "philadelphia", "erevan", "moscow", "prague", "paris", "berlin", "ankara", "baku", "ekaterinburg","grozni", "irkutsk", "ninve", "valencia", "astana", "dublin", "zaltsburg", "pekin", "mumbai"};
 	int size = sizeof(city) / sizeof(city[0]);
	int random_index = rand() % size;
	string user;
	bool check = false, win_break = false; 

	while (true) {
		if (choose == 2) {
			cout << " computer: \t" << city[random_index];
			choose = 1;
			check = true;
 			cout << endl;
		}
		if (choose == 1) {
			cout << " user:   \t";
			cin >> user;
			choose = 2;
			cout <<  endl;
		}
		if (check && city[random_index][city[random_index].length() - 1] != user[0]) {
			cout << " You Lose \n";
			break;
		}
		if (check) {
			city[random_index] = "0";
		}
		for (int i = 0; i < size; i++) {
			if (city[i][0] == user[user.length() - 1]) {
				random_index = i;
				break;
			}
			if (i == (size - 1)) {
				cout << " You Win \n";
				win_break = true;
				break;
			}
		}
		if (win_break){
			break;
		} 
	}
}
