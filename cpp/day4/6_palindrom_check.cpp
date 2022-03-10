#include <iostream>

using  namespace std;

bool check(string word){

	int len = word.length();
	
	for(int i = 0; i < len / 2; i++){
		
		if(word[i] != word[len - i - 1]){
			
			return false;
		}
	}
	
	return true;
}

int main(){
	
  string str;
	
  cout << "Enter the word: ";
  cin >> str;
	
  const int len = str.length(), value = 'a' - 'A';

	
  for(int i = 0; i < len; i++){
	    
  	if(str[i]>= 'A' && str[i] <= 'Z'){
	        
		str[i] = str[i] + value;
	 }
  }
	
  if(check(str)){
		 
	 cout << "Word is polindrom. \n";
	
  } else {
	    
	cout << "Word is not polindrom \n";
  }
	

return 0;
}


