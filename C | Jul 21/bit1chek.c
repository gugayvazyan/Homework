#include <stdio.h>

        int main(){


                int num = 0;
                int bit = 0;
		int res = 0;
                printf("Input number: ");
                scanf("%d", &num);
                printf("Choose bit to set 1: ");
                scanf("%d", &bit);
                res = (num >> bit) & 1;


                if ( res == 1){
			printf("%d bit of %d is: %d\n", bit, num, res);
		} else {
			printf("%d bit of %d is: %d\n", bit, num, res);
		}

        return 0;
        }
