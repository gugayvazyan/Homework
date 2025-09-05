#include <stdio.h>

	
void foo(int n) {
	
	if(n <= 0) return;
	
	foo(n / 10);
	printf("%d, ", n % 10);

}

int main() {
	
	int n = 325;
	
	foo(n);
	return 0;

}
