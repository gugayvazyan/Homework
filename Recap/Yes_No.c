#include <stdio.h>

int main() {
	
	const int size = 10;
	
	int k = 0;
	int arr[size] = {1,2,3,4,5,6,7,8,9,10};
				
	printf("Enter number to check: ");
	scanf("%d", &k);
	
	int i = 0;
	
	while (i++ < size) {
		if (arr[i] == k) {
			printf("YES!\n");
		  	return 0;
		}
	}

	printf("NO!\n");
	return 0;
}
		
