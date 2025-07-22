#include <stdio.h>


	int main(){
		char sym = '\0';
		printf("Pls input capital  letter: ");
		scanf("%c", &sym);
		if ( sym >= 65 && sym <= 90){
		
		    sym = sym + 32;
		    printf("%c\n ", sym); 
		
		} else { 
			printf("error, invalid value...\n");
	
		}
	
	
	
	
	
	 return 0;
	}
