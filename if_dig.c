#include <stdio.h>
    int main(){
        const int n = 7;
        char arr[n] = { 'n', 'a', '7', '6', 'c', 'x', 'y'};
        for( int i = 0; i < n; ++i){
            if( arr[i] >= 48 && arr[i] <= 57){
                printf("%c\n", arr[i]);
            }
        }
        return 0;
    }  
