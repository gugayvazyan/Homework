#include <stdio.h> 






int main(){
	int x = 0;
	int res = 0;
	int num = 0;

	printf("Please input your num: ");
	scanf("%d", &x);

	while( x != 0){
     res = x % 10;
	 num += res;
	 x /= 10;
} 
	 	

	printf("Your result is: %d ", num);


return 0;

}	
