#include <iostream>

using namespace std;

   char f (char letter) {

	if (letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z'){
  		
	    switch (letter){
 
		case 'a':  case 'A':
		case 'e':  case 'E':
		case 'i':  case 'I': 
		case 'o':  case 'O':
		case 'u':  case 'U':
		
		 cout << "'" << letter << "' is vowel \n";

       		 break;

		default: 
		
		 cout << "'" << letter << "' is consonant \n";

       		 break;

		}
        
    	} else {
	
      		cout << " It's not charecter \n ";

   
	}
    

    return 0;
}


int main () {

	return f ('a');

}

