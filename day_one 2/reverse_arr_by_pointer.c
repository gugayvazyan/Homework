#include <stdio.h>

int main() {
	const int size = 7;
	int arr[size] = { 1, 2, 3, 4, 5, 6, 7};

	int *start = arr;
	int *end = arr + size - 1;
	int temp = 0;
	while (start < end ){
		temp = *start;
		*start = *end;
		*end = temp;
		
		++start;
		--end;
	}

	for (int i = 0; i < size; ++i) {
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}

