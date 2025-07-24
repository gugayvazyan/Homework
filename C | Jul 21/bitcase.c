#include <stdio.h>
	int main(){
	    char let = '\n';
	    char res = '\n';
	    printf("Input a letter: ");
	    scanf(" %c", &let);
    
	    if ((let >= 'A' && let <= 'Z') || (let >= 'a' && let <= 'z')){
		res = let ^ 32;     
        	printf("Res: %c\n", res);
			
	    }  else { 
	        printf("Not a letter: \n");
	    }
    return 0;
}
