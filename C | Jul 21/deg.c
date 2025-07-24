#include <stdio.h> 

	
int main(){
		
		int x = 0;
		int deg = 0;
		int	res = 0;
		int tmp = 0;
		printf("Input yor number: ");
		scanf("%d", &x);
		printf("Input degree: ");
		scanf("%d", &deg);	
  		
		if (x > 0 && deg > 0){
			tmp = x * x;

			while( deg != 2){
	 			res = tmp * x;
				tmp = res;			
				deg -= 1;
				
            } 	
		printf("Your result is: %d\n", tmp);
		} else if( deg == 0){
			printf("Your result: 1\n");
		} else if( x == 0){
			printf("Your result: 0\n");		
		}
return 0;
}
