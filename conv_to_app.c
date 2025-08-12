#include <stdio.h>

int main() {
        const int n = 7;
        char low[n];
        for (int i = 0; i < n; ++i) {
            scanf(" %c", &low[i]);
        }
        for (int i = 0; i < n; ++i){
            if( low[i] >= 97 && low[i] <= 122){
                low[i] = low[i] - 32;
            }
        }

        for (int i = 0; i < n; ++i) {
            printf("%c", low[i]);
        }
    
        printf("\n");
        return 0;
    }
