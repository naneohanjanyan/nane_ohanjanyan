#include <iostream>

using namespace std;

  int size ( int i ) {

  const int length = i;
  
  while (i >= 1){

    int j = 1;

    while (j <= i){

        cout << '*';

        j ++;

    }

    cout << endl;

    i --;

}


///////////////////////////////////////////////////

cout << endl << endl;



int l = 1;

while (l <= length){

int  k = length;
   
    while(k >= 1){
        
        if (k <= l) cout << "*" << " ";
        
        else cout << " ";

        -- k;
   }

    cout << endl;

    l ++;
}


////////////////////////////////////////////////////////


cout << endl << endl;


l = 1;

while (l <= length){

    int  k = length;
    
    while(k >= 1){

        if (k <= l) cout << "*";
        
        else cout << " ";

        -- k;
   }

    cout << endl;

     ++l;
}



///////////////////////////////////////////

cout << endl << endl;

 l = 1;
 
   while ( l <= length ){
       
       int j = 1;
       
       while ( j <= l){
           
           cout << "*";
           
           j++;
       }
       
       cout << endl;
       
       l++;
   }



return 0;
}



int main () {

	return size (7);

}
