#include <stdio.h>

	int main(){
		int age = 0; 
		int can_vote = 0;
		printf("Inpit your age:");
		scanf("%d", &age);

		if (age >= 18) {
			can_vote = age;
			printf("You can vote: \n");
				
		}else{
			
			printf("Sorry you can't vote:\n ");
			}

		return 0;
	}
