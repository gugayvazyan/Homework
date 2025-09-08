#include <stdio.h>

int main() {
    const int SIZE = 6;
    int arr[] = {1, 2, 3};
    int arr1[] = {4, 5, 6};

   	for (int i = SIZE; i > 0; --i) {
        if (i > SIZE / 2) printf("%d ", arr1[i - SIZE / 2 - 1]);
        else printf("%d ", arr[i - 1]);
    }

    printf("\n");
    return 0;
}


