#include <stdio.h>

int main() {
	const int size = 7;
	int arr[size] = { 1, 2, 2, 3, 4, 4, 5};
	
	
	for (int j = 0; j < size; ++j) { 
		for (int i  = 1; i < size; ++i) {
			if (arr[i] == arr[j]) {
				 arr[i] = arr[i + 1];
			 }
		}
	}

	for (int i = 0; i < size ; ++i) {
		if ( i != 0 && arr[i] != 1) {
			printf("%d", arr[i]);
	  	} else if ( i == 0) {
			printf("%d", arr[i]);
		}
	}
	printf("\n");
	return 0;
}

	
	
