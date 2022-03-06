#include <iostream>

using namespace std;

int main()
{
  
char character;

 cout << " Input the character: ";
 cin >> character;

switch (character){

	case 'a':  case 'A':
	case 'e':  case 'E':
	case 'i':  case 'I': 
	case 'o':  case 'O':
	case 'u':  case 'U':
		
	  cout << "'" << character << "' is vowel \n";
	  break;
	

	case 'b':  case 'B':
       	case 'c':  case 'C': 
	case 'd':  case 'D': 
	case 'f':  case 'F': 
	case 'g':  case 'G': 
	case 'h':  case 'H': 
	case 'j':  case 'J':
	case 'k':  case 'K':
	case 'l':  case 'L': 
	case 'm':  case 'M': 
	case 'n':  case 'N':
	case 'p':  case 'P': 
	case 'q':  case 'Q': 
	case 'r':  case 'R': 
	case 's':  case 'S':
	case 't':  case 'T':
	case 'v':  case 'V': 
	case 'w':  case 'W': 
	case 'x':  case 'X': 
	case 'y':  case 'Y':
	case 'z':  case 'Z':

	
	  cout << "'" << character << "' is consonant \n";
          break;


	default:

	  cout << " It's not charecter \n ";

}

    return 0;
}
 

