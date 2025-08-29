#include <stdio.h>
#include <stdlib.h>

int main() {
		
	int n = 0;
	printf("Please input length: ");
	scanf("%d", &n);
	

	getchar();

	char *arr = malloc(sizeof(char) * n);
	
	
	printf("Input your string: ");
	fgets(arr, n, stdin); 

	printf("Res: ");	
	fputs(arr, stdout);
	
	free(arr);
	
	return 0;
}
