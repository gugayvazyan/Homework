#include <stdio.h>


                int main(){
                        int num = 0;
			int exp = 0;
			int mul = 0;
			int div = 0;
                        printf("Input your number: ");
                        scanf("%d" , &num);
			printf("Input exponent: ");
			scanf("%d", &exp);
		       	mul = num << exp;
			div = num >> exp;
			printf("Result:\nMul: %d\nDiv: %d\n", mul, div);


return 0; }
