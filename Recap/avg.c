#include <stdio.h>


int main() {
	
	const int size = 10;
	
	int arr[size];
	
	float res = 0;
	
	printf("Enter 10 nums to arr: ");
	for (int i = 0; i < size; ++i) scanf("%d", &arr[i]);

	for (int i = 0; i < size; ++i) res += arr[i];
	
	printf("AVG: %.2f", res /= 10);

	return 0;
}
