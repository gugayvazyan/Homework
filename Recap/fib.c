#include <stdio.h>

int fib(int n) {
	if (n == 0 || n == 1) return n;

	return fib(n - 1) + fib(n - 2); 
	
}

int main() {
	int n = 0;
	printf("Enter number: ");
	scanf("%d", &n);
	
	printf("Fib: %d\n", fib(n));
	
	return 0;
}
		
