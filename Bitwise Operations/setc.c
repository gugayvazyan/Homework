#include<stdio.h>

   int main(){
     int x = 0;
     printf("Pls input n:");
     scanf("%d" , &x);  

     int res  = 34 & ~(1 << x);
   printf("result: %d\n" , res);

   return 0;
   
   
   
   }
