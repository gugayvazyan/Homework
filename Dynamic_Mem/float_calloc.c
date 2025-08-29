#include <stdio.h>
#include <stdlib.h>

int main() {

	int n = 0;
	printf("Input arr size: ");
	scanf("%d", &n);

	float *arr = calloc(n, sizeof(float));
	
	printf("Input %d number:\n", n);
	for (int i = 0; i < n; ++i) scanf("%f", &arr[i]);

	printf("Your numbers is : ");
	for (int i = 0; i < n; ++i) printf("%.2f ", arr[i]);
	printf("\n");
	
	free(arr);
	
	return 0;
}  
	
