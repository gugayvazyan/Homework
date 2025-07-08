#include<stdio.h>
  
   int main(){
       int a = 0;
       int b = 0;
      printf("Pls input a :");
      	scanf("%i" , &a);
      printf("Pls input b :");
     	scanf("%i" , &b);
       int res = a - b;
        int  x = a - res;
 	int  y = b + res;	
      printf("Your results is: a = %i b = %i \n" , x , y);
    return 0;
   
   
   }
