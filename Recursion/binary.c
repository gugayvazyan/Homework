#include <stdio.h>

void binary(int n) {

	if (n == 0) return;
 
	binary(n / 2);
 	printf("%d ", n % 2);	
}	

int main() {
	
	binary(-8);
	
	printf("\n");
 
	
	
	return 0;
}

		
	
