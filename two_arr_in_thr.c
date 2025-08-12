#include <stdio.h>

int main() {
    const int size = 3;
    const int SIZE = 6;
    

    int arr[size] = { 1, 3, 5,};
    int arr1[size] = { 2, 4, 6,};
    int arr3[SIZE] = {}; 
    int c = 0, k = 0, j = 0;
	while (c < size && j < size) {
		if (arr[c] <=  arr1[j]){
			arr3[k++] = arr[c++];
		} else {
			arr3[k++] = arr1[j++];
		}
	}
	while (c < size) {
		arr3[k++] = arr[c++];
	}
	while (j < size) {
		arr3[k++] = arr1[j++];
	}

    for (int i = 0; i < SIZE; ++i) {
        printf("%d", arr3[i]);
    }
	printf("\n");
    return 0;
}

