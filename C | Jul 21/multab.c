#include <stdio.h> 


	int main(){

		int num = 0;
		int x = 0;
		int tmp = 0;
		int res = 0;
		printf("Input number: ");
		scanf("%d", &num);
		if ( num > 0){	
		while( x != 11){
			res = num * x;
			printf(" %d x %d = %d\n" , num , x, res);
			++x;
		}
	}

return 0;}
