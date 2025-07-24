#include<stdio.h>

   int main(){
    int x = 0;
    int y = 0;
   	 printf("Please input x :");
  	 scanf("%d" , &x);
   	 printf("Please input y:");
	 scanf("%d" , &y);

 	x = x ^ y;
         y = x ^ y;
 	  x = x ^ y;	

   
    printf("Your results is:\n  x = %i\n  y = %i \n" , x , y);
    return 0;
   
   
   }

