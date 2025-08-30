#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    printf("Input array size: ");
    scanf("%d", &n);

    int *arr = malloc(sizeof(int) * n);

    printf("Input %d numbers:\n", n);
    for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);

    printf("Your numbers: ");
    for (int i = 0; i < n; ++i) printf("%d ", arr[i]);
    printf("\n");


    int new_n = 0;
    printf("Input new array size : ");
    scanf("%d", &new_n);

    int *tmp = realloc(arr, sizeof(int) * new_n);
   

    arr = tmp;
    
    printf("Input %d new numbers:\n", new_n - n);
    for (int i = n; i < new_n; ++i) scanf("%d", &arr[i]);

    printf("Updated numbers: ");
    for (int i = 0; i < new_n; ++i) printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
