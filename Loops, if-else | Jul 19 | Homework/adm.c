#include <stdio.h>

	int main(){
		char usr[5];
		int is_admin = 0;
		printf("Input your ursname: ");
		scanf("%5s", usr );
		
		if (usr[0] == 'a' &&
			usr[1] == 'd' &&
			usr[2] == 'm' &&
			usr[3] == 'i' &&
			usr[4] == 'n' &&
			usr[5] == '\0'){

		is_admin = 1;
		printf("You are admin \n");

		} else {
		
		printf("Welcome...\n");
		}

	return 0;	

	}
