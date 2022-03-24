#include <iostream>
#include <fstream>

using namespace std;

string corrected(string word) {
	ifstream dict;
	dict.open("dictionary.txt");
	string word_corr;	
	int count = 0;
	
	while(!dict.eof()) {
		count = 0;
		getline(dict, word_corr);
		for(int i = 0; word[i] != '\0'; i++) {
			if(word[i] != word_corr[i]){
				count ++;
			}
		}
		if(count == 1) {
			break;
		}
	}
	
	dict.close();
	if(count != 1) {
		return word;
}
  return word_corr;
}

int main() {

ofstream correct_f;
correct_f.open("corrected.txt");
string str;
cout << " Input line: ";
getline(cin, str);
str += " ";
string word;
int i = 0;

while(str[i] != '\0') {
	word = "";
	for(;str[i] != ' '; i++){
		word += str[i];
	}
	i++;
	correct_f << " " << corrected(word) << endl;
}
correct_f.close();

return 0;
}
