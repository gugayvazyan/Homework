#include <stdio.h>
#include <stdlib.h>

int main() {

	int n = 0;
	printf("Input arr size: ");
	scanf("%d", &n);

	int *arr = malloc(sizeof(int) * n);
	
	printf("Input %d number:\n", n);
	for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);

	printf("Your numbers is : ");
	for (int i = 0; i < n; ++i) printf("%d ", arr[i]);
	printf("\n");
	
	free(arr);
	
	return 0;
}  
	
	

