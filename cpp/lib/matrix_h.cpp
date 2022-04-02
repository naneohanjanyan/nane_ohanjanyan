#include <iostream>
#include "matrix.h"

void sort(int **arr, int row, int column){
	int temp;
	for(int **ptr  = arr; ptr <= arr + row - 1; ptr++) {
		for(int *ptr1 = *ptr; ptr1 <= *ptr + column - 1; ptr1++) {
			for(int *ptr2 = ptr1; ptr2 <= *ptr + column - 1; ptr2++) {
				if(*ptr2 < *ptr1) {
					temp = *ptr2;
					*ptr2 = *ptr1;
					*ptr1 = temp;
				}
			}
		}
	}
}


