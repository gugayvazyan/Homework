#include <stdio.h>




		int main(){


			int num1 = 0;
			int num2 = 0;
			int res = 0;
			char tmp = 0;
			char act[1];
			char stop[1];
			while( stop[0] != 'Q'){
				printf("Input first number: ");
                scanf("%d", &num1);
                scanf("%c", &tmp);
                printf("Choose action ( +, -, *, /): \n");
                scanf("%c", &act[0]);

                printf("Input second number: ");
                scanf("%d", &num2);
                           
				if (act[0] == '+'){
					printf("Res : %d\n", num1 + num2);
				} else if (act[0] == '-'){
					printf("Res : %d\n", num1 - num2);
				} else if (act[0] == '*'){
				    printf("Res : %d\n", num1 * num2);
				} else if (act[0] == '/'){
	                  printf("Res : %d\n", num1 / num2);
				}  
				  scanf("%c", &tmp); 
              	  printf("Press Q to exit: ");
				  scanf("%c", &stop[0]);
				  printf("--------end--------\n");
				}
		return 0; }	
			
	
		

				







