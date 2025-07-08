#include<stdio.h>
 
   int main(){
   	float x = 0;
	float y = 0;
	float z = 0;
    printf("Input 1st number: ");
     scanf("%f" , &x);
    printf("Input 2nd number: ");
     scanf("%f" , &y);
    printf("Input 3rd number: ");
     scanf("%f" , &z);

       float ttl = x + y + z;
       float avg = ttl / 3;
    printf("Total: %f \n" , ttl);
    printf("Average: %f \n" , avg);
 return 0;
   }
