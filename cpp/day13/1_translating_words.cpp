#include <iostream>
#include <fstream>

using namespace std;
string translate_engl_to_arm(string);
string translate_arm_to_eng(string);

int main () {

cout << " If transleted hy-en, Input  1, else input 2: ";
int language;
cin >> language;

ofstream translated;
translated.open("translate.txt");

string line;
cout << " Input line: " ;
getline(cin,line);
getline(cin, line);
line += " ";

string word;
string line_add = "" ;
int i = 0;

while(line[i] != '\0') {
	word = "";
	for(;line[i] != ' '; i++){
		word += line[i];
	}
	i++;
	if( language == 1) {
		line_add += translate_arm_to_eng(word) + " ";

	} else if( language == 2){
		line_add += translate_engl_to_arm(word) + " ";
	}
}	

translated <<  line_add ;
translated.close();

return 0;
}

string translate_arm_to_eng(string word) {

	ifstream arm_dictionary;
	arm_dictionary.open("hy-en.txt");
	string word_tr;
	string text = "";

	while(!arm_dictionary.eof()) {
		int  count = 0;
		getline(arm_dictionary, word_tr);
		for(int i = 0; word_tr[i] != '-'; i++) {

			if(word[i] == word_tr[i]){
				count ++;
			} else {
				break;
			}
		}
		if(count  == word.length()){
			count += 3;
			for(; word_tr[count] != '\0'; count++){
				text += word_tr[count];
			}
		}

	}

	arm_dictionary.close();

return text;
}

string translate_engl_to_arm(string word) {

	ifstream engl_dictionary;
	engl_dictionary.open("en-hy.txt");
	string word_tr;
	string text = "";

	while(!engl_dictionary.eof()) {
		int  count = 0;
		getline(engl_dictionary, word_tr);
		for(int i = 0; word_tr[i] != '-'; i++) {

			if(word[i] == word_tr[i]){
				count ++;
			} else {
				break;
			}
		}
		if(count  == word.length()){
			count += 3;
			for(; word_tr[count] != '\0'; count++){
				text += word_tr[count];
			}
		}

	}

	engl_dictionary.close();

return text;
}
