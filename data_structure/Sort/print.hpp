#ifndef PRINT_H
#define PRINT_H

#include <iostream>
using namespace std;

void Print(int arr[],int size){
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

#endif 