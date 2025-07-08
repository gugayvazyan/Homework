#include<stdio.h>
  int main(){
    float x = 0;
    float y = 0;
    printf("Pls input length:  \n");
    scanf("%f" , &x);
    printf("Pls input width:  \n");
    scanf("%f" , &y);
    float res = x * y;
    printf("Your resalt is:  %f" , res);
return 0;
  }
