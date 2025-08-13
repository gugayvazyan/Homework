#include <stdio.h>

int main() {
	const int size = 12;
	int arr[size] = {};
	int loop = 8;
	int count = loop;
	printf("Input 8 number: ");
	for (int i = 0; i < loop; ++i) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < loop; ++i) {
		for (int j = loop - i - 1; j != i; --j) {
			if (arr[i] > arr[j]) { 
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}	
	int reset = loop;
	for (int i = 0; i < reset; ++i) {
		for (int j = i + 1; j < reset; ++j) {
			if (arr[i] == arr[j]) {
				for (int k = j; k < reset - 1; ++k) {
					int tmp = arr[i];
					arr[k] = arr[k + 1];
					arr[k + 1] = tmp;
				}
				--reset;
				--j;
			}
		}
	}	
	

	for (int i = 0; i < reset  ; ++i) {
		  
			printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

	
	
