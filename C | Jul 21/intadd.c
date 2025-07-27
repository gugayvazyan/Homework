#include <stdio.h>

	int main(){
		int start = 0;
		int end = 0;
		int sum = 0;
		printf("Input start: ");
		scanf("%d", &start);
		printf("Input end: ");
                scanf("%d", &end);
		if ( start > end){
			int temp = start;
			start = end ;
			end = temp;
		}
	       	if ( start % 2 != 0) {
			start++; 
		}
	       	while ( start <= end) {
			sum += start;
			start += 2;
		} 
	   	printf("Your sum is: %d\n", sum);
		return 0; 
	}

