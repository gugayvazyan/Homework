#include <stdio.h>
	int main(){
	  int num = 0;
	  
	  printf("Enter a number greater than 12: ");
          scanf("%d", &num);
	  while (num <= 12) {
                printf("Number must be greater than 12: ");
                scanf("%d", &num);
	  } if (num == 0) {
	        printf("0");
    	  }
	 printf("Reversed:  ");
   	 while (num != 0) {
      	        printf("%d", num % 10);
       	        num /= 10;
   	 }
    printf("\n");
    return 0;
}
