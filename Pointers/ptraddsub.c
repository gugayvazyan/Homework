#include <stdio.h>
	int main(){
		int a = 20;
		int b = 5;

		int *ptr_a, *ptr_b;

		ptr_a = &a;
		ptr_b = &b;
		 
		int sum = *ptr_a + *ptr_b;
		int dif = *ptr_a - *ptr_b;
		printf("sum: %d\n", sum);
		printf("dif: %d\n", dif);
		
		return 0;
	}
