#include <stdio.h>
int main() {
        const int n = 7;
        int arr[n] = {};
        int arr1[n] = {};
        printf("Input 7 numbers to first array: \n");
        for (int i = 0; i < n; ++i) {
            scanf("%d", &arr[i]);
        }

        printf("Input 7 numbers to second array: \n");
        for( int i = 0; i < n; ++i ){
            scanf("%d", &arr1[i]);
        }

        printf("<=======>\n");
        for( int i = 0; i < n; ++i ){
            arr[i] = arr[i] + arr1[i];
            printf("%d: %d\n", i + 1, arr[i]);
        }
        return 0;
    }

