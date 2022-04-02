#include <iostream>
#include "my_atoi.h"

int my_atoi(char *ptr) {
	int result = 0;
	for(int i = 0; ptr[i] != '\0'; i++) {
		if( ptr[i] >= 48 && ptr[i] <= 57) {
			result = 10 * result + (ptr[i] - '0');
		} else {
			break;	
		}
	}
return result;

} 
