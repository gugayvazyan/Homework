#include <stdio.h>


	int main(){
		int sym = 0;
		printf("Pls input your score: ");
		scanf("%d", &sym);
		if ( sym <= 100 &&  sym >= 90){
		    printf("A class: \n"); 
		
		} else if( sym <= 89 && sym >= 80 ) { 
			printf("B class: \n ");
	
		} else if( sym <= 79 &&  sym >= 70 ) {
                        printf("C class: \n ");
        
                } else if( sym <= 69 && sym >= 60 ) {
                        printf("D class: \n ");
        
                } else if( sym <= 59){
                        printf("E class: \n ");
        
                }




	
	
	
	
	
	 return 0;
	}
