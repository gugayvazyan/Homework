#include <stdio.h> 

int main () {
	
	const int size = 10;

	int arr[size];
	int arr2[size];

	printf("Enter 10 nums to first arr: ");
	for (int i = 0; i < size; ++i ) scanf("%d", &arr[i]);
	
	printf("Enter 10 nums to second  arr: ");
	for (int i = 0; i < size; ++i ) scanf("%d", &arr2[i]);

	printf("Res: ");
	for (int i = 0; i < size; ++i ) printf("%d ", arr[i] + arr2[i]);
	printf("\n");
	
	return 0;
}
	
	
	
