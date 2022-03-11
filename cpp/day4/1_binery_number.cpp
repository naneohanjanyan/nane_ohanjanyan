#include <iostream>

using namespace std;


void converbin (int num)
{
	int binaryNum[10000];

	int i;
	
	for(i = 0; num > 0; i++) {

		binaryNum[i] = num % 2;
		num = num / 2;
	}
        
	cout << "Binary of the given number = ";
	
	for (int j = i - 1; j >= 0; j--){
	
		cout << binaryNum[j];
	}
}
int main()
{
     int binaryNum[1000], num;    
    cout<<"Enter the number to convert: ";    
    cin>>num;    
 	converbin(num);
	cout << endl;
	
	return 0;
}

