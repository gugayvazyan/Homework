#include <stdio.h>

int main() {
    int x= 0 ;
    printf("Pls unput n: ");
    scanf("%d", &x);

    int n  = 1 << x;
    int res = 34 ^ n;
    printf("result: %d\n", res);
    return 0;
}
