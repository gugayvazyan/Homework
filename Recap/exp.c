#include <stdio.h>


int power(int n, int x) {
	int res = 1;
	int i = 0;
	while (i < x) {
		res *= n;
		++i;
	}
	return res;
}

int main() {

	int n = 0;
	int exp = 0;
	printf("Enter number: ");
	scanf("%d", &n);

	printf("Enter exponent: ");
	scanf("%d", &exp);
	
	printf("Power: %d\n", power(n, exp));
	
	return 0;
}
		
