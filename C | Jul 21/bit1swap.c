#include <stdio.h>

	int main(){


		int num = 0;
		int bit = 0;
		printf("Input number: ");
		scanf("%d", &num);
		printf("Choose bit to set 1: ");
		scanf("%d", &bit);
		num = num | (1 << bit);	
		printf("Your result is: %d\n", num );
	
	return 0;
	}
