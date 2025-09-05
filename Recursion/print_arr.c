#include <stdio.h>
	
void print(int *arr,int size) {

	if (size <= 0) return;
	
	printf("%d ", *arr);
	print(arr + 1, size - 1);
	
}

void rev_print(int *arr,int size) {

	if (size <= 0) return;
	
	rev_print(arr + 1, size - 1);	
	
	
	printf("%d ", *arr);
}

int main() {
	
	int arr[] = {6,7,8,9};
	int size = sizeof(arr) / sizeof(int);

	print(arr, size);
	printf("\n");
	
	rev_print(arr, size);
	printf("\n");
	return 0;
}
		
	
		
