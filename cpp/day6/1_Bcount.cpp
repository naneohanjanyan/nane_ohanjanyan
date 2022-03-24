#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str =" bb  AACD CDHBB  BB    BB  " ;
    int count = 0, word = 0, len = str.length();
     
    for (int i = 0; i < len; i++){
         
        if(str[i] == 'B'){
             
            count++;
          
        } 
        if((str[i + 1] == ' ' || str[i + 1] == '\0') && count == 2){
                 
                word++;
                count = 0;
            }
    }
     
    cout << " The number of words with 'B': " << word << endl;

    return 0;
}

