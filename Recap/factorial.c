#include <stdio.h>

int fac(int n) {

	if (n == 0 || n == 1) return n;
	
	return fac(n - 1) * n;
}


int main() {

	int n = 0;
	printf("Enter your num: ");
	scanf("%d", &n);
	
	printf("%d\n", fac(n));

	return 0;
}

