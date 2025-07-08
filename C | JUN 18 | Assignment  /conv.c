#include<stdio.h>
  int main(){
    float x = 0;
    printf("Pls input celsius: \n");
    scanf("%f" , &x);
    float res = ( x * 9/5 ) + 32 ;
    printf("F = %f" , res);
return 0;
  }
