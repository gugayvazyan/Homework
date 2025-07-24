#include <stdio.h>


	int main(){
		int x = 0;
		int y = 0;
		int z = 0;
		printf("Pls input firts num:  ");
		scanf("%d", &x);
		printf("Pls input second num: ");
                scanf("%d", &y);
		printf("Pls input third num: ");
                scanf("%d", &z);

		

		if ( x > y &&  x > z){
		    printf("The biggest num is: %d \n ", x); 
		
		} else if( y > x  &&  y > z ) { 
			printf("The biggest num is: %d \n", y);
	
		} else if( z > x &&  z  > y ) {
                        printf("The biggest num is: %d \n", z);
        	}





	
	
	
	
	
	 return 0;
	}
