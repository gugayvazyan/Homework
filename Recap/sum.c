#include <stdio.h>



int sum(int n) {
	int res  = 0;
	for (int i = 0; i <= n; ++i) {
			res += n % 10;
				n /= 10;
	}
	return res;
	
}


int main() {
	
	int n = 0;
	
	printf("Enter number: ");
	scanf("%d", &n);
	
	printf("Sum: %d\n", sum(n));
	
	return 0;
} 
