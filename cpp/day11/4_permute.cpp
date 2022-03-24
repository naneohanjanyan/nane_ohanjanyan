#include <iostream>
#include <cstring>

using namespace std;

void permute(string word, int l, int size) {
	if (l == size - 1) {
		cout<< ' ' << word << endl;
	}else {
		for (int i = l; i < size; i++) {
			swap(word[l], word[i]);
			permute(word, l + 1, size);
		}
	}
}

int main() {
string word;
cout << " Enter the word: ";
cin >> word;

int size = word.length();
cout << " Resulat:\n";
permute(word, 0, size);
return 0;
}


