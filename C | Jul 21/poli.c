#include <stdio.h> 
	



	int main(){
		int x = 0;
		int deg = 0;
		int tmp = 0;

		printf("Pls input your number: ");
		scanf("%d", &x);
		tmp = x; 	

		if ( x > 0){
		while( x != 0){

		res = res * 10 + x % 10;
		x /= 10;
		}

		if ( res == tmp) {

			printf("Your num is polindrom:  %d\n" , res);
		}	else{ 
			printf("Your num is not polindrom. \n");
	}
}

return 0;}

			
		
