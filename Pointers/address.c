#include <stdio.h>


	int main(){ 
		int a = 10;
		int *int_ptr = &a;
		double b = 15.4;
		double *double_ptr = &b;
		char c = 'Z';
		char *char_ptr = &c;
		printf("int address : %p\n", (void*)int_ptr);
		printf("double address : %p\n", (void*)double_ptr);
		printf("char address : %p\n", (void*)char_ptr);

		return 0;
	}	
