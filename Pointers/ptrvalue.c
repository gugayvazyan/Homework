#include <stdio.h>
	int main(){
		int num = 123;
		int *ptr;
		ptr = &num;
		printf("num value: %d\n", *ptr);
		printf("num address: %p\n", (void*)ptr);
		*ptr = 222;
		printf("num is: %d\n", num);
		
		return 0;
	}
