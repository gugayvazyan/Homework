#include <stdio.h>

int main() {
	const int SIZE = 6;
	int arr[] = {1,2,3};
	int arr1[] = {4,5,6};

	for (int i = 0; i < SIZE; ++i) {
							
		if (i < SIZE / 2) printf(" %d", arr[i]);
		else printf(" %d", arr1[i - SIZE / 2]);
	}
	printf("\n");


	return 0;
}
						
