#include <stdio.h>

void revers(char* arr, int size) {

	for (int i = 0; i < size / 2; ++i) {
		int tmp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = tmp;
	}

}

 
int main() {
    char arr[] = "Hello, world!";
    int size = 13;

    printf("Original: %s\n", arr);
    revers(arr, size);
    printf("Reversed: %s\n", arr);

    return 0;
}
	
