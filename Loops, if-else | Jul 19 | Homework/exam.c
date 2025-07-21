#include <stdio.h>


	int main(){
		int res = 0; 
		int passed = 0; 
		printf("Input your score: \n");
		scanf("%d", &res);	
		if (res >= 50){
			res = passed;
			printf("passed: \n");

	} else{
		printf("faild: \n");
	}

		return 0;
	}
