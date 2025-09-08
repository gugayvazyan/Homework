#include <stdio.h>
#include <stdbool.h>

int pCheck(int x) {
    if (x < 0) return false;

    int tmp = x;   
    int res = 0;

    while (x != 0) {
        res = res * 10 + x % 10;
        x /= 10;
    }

    return (res == tmp) ? true : false; 
}


int reverse(int n) {
    int tmp = 0;
    while (n > 0) {
        tmp = tmp * 10 + n % 10;
        n /= 10;
    }
    return tmp;
}

int main() {
	int n = 0;
	int count = 0;
	printf("Enter your num: ");
	scanf("%d", &n);

	while (!pCheck(n)) {
		++count;		
		printf("%d| %d + %d = %d\n",count, n, reverse(n), n + reverse(n));
		n += reverse(n);
	}

	return 0;
}
