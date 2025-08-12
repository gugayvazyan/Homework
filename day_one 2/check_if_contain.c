#include <stdio.h>

int main() {
        const int SIZE = 7;
        int arr[SIZE] = { 5, 6, 7, 10, 11, 4, 0};
        int num = 0;
    
        printf("Input number to check: ");
        scanf("%d",&num);

        for (int i = 0; i < SIZE; ++i) {
            if(num == arr[i]) {
                printf("Yes");
                return 0;
            }
        }

        printf("No");
        return 0;
}
