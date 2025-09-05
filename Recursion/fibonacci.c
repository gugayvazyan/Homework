#include <stdio.h>



int fibonacci(int num) {
	if (num == 0 || num == 1) return num;
	return	fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {

	printf("%d", fibonacci(6));
	
	return 0;
}
