#include <stdio.h>

void dis(int num) {
	if (num == 0) return;

	printf("%d,", num);
	dis(num - 1);

}

void asc(int num) {
	if (num == 0) return;
	
	asc(num - 1);
	printf("%d,", num);
}
int main() {

	dis(10);
	printf("\n");
	asc(10);
	
	return 0;
}
