#include <stdio.h>

int main() {
    const int SIZE = 7;
    int arr[SIZE] = {};
    int arr1[SIZE] = {};

    printf("Input 7 number to firt arr:\n");

    for (int i = 0; i < SIZE; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Input 7 number to second arr:\n");

    for (int i = 0; i < SIZE; ++i) {
        scanf("%d", &arr1[i]);
    }

    printf("<=======>\n");

    for (int i = 0; i < SIZE; ++i) {
        if(arr[i] != arr1[i]) { 
            printf("Not same\n");
            return 0;
        }
    }
    printf("Same\n");
    return 0;
} 
