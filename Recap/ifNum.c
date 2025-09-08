#include <stdio.h>

int check (char c) {
	if (c >= '0' && c <= '9') return 1;
	return 0;
}


int main() {
	
	const int size = 50;
	
	char arr[size];

	printf("Write something: ");
	fgets(arr, size, stdin);
	
	int i = 0;
	
	while (i++ < size) {
		if (check(arr[i])) printf("%c ", arr[i]);
	}
	printf("\n");
	return 0;
}
