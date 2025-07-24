#include <stdio.h>


	int main(){
		int x = 0;
		int y = 0;
		printf("Input X: ");
		scanf("%d", &x);
		printf("Input Y: ");
		scanf("%d", &y);
		x = x ^ y;
		y = x ^ y;
		x = x ^ y;
		printf("Swap.....\nX: %d\nY: %d\n", x, y);	
	
	
	return 0;
	
	
	
	
	
	
	
	}	
