#include <stdio.h>


                int main(){
                        int x = 0;
			int res = 0;
                        printf("Input your number: ");
                        scanf("%d" , &x);
			res = x & (x - 1);
                        if (res == 0)  {
                                printf("Your num is a power of two. \n");
                        } else{
                        printf("Your num is not a power of two. \n");
                        }

return 0; }
 
