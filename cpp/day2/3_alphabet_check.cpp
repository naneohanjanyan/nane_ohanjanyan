#include <iostream>

using namespace std;

int main()
{
  
char character;

 cout << " Input the character: ";
 cin >> character;

switch (character){

	case 'a':
	case 'e':
        case 'i':
	case 'o':
       	case 'u':
		
	  cout << "'" << character << "' is vowel \n";
	  break;

	default:

	  cout << "'" << character << "' is consonant \n";
          break;
}

    return 0;
}
 

