#include <stdio.h>




		int main(){


			int num1 = 0;
			int num2 = 0;
			int res = 0;
			char act = '\0';
			char stop = '\0';
			while( stop != 'Q'){
				printf("Input first number: ");
                scanf("%d", &num1);
                printf("Choose action ( +, -, *, /): \n");
                scanf(" %c", &act);

                printf("Input second number: ");
                scanf("%d", &num2);
                           
				if (act == '+'){
					printf("Res : %d\n", num1 + num2);
				} else if (act == '-'){
					printf("Res : %d\n", num1 - num2);
				} else if (act == '*'){
				    printf("Res : %d\n", num1 * num2);
				} else if (act == '/'){
	                  printf("Res : %d\n", num1 / num2);
				}  
				   
              	printf("Press Q to exit: ");
	        scanf(" %c", &stop);
	        printf("--------end--------\n");
				}
		return 0; }	
			
	
		

				







