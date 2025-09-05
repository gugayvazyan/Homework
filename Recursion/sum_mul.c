#include <stdio.h>


int mul(int num) {
	
	if(num < 10) return num;

	return  (num % 10) * mul(num / 10);
}

int add(int num) {
	
	if(num < 10) return num;

	return  (num % 10) + add(num / 10);
}


int main() {

	printf("%d ", mul(1234));
	printf("%d ", add(1234));
	
	return 0;
}
