#include <stdio.h>


char foo(char* arr) {
		
		char let;
		
		if (arr == NULL) return 0;
	
		if (*arr >= 'A' && *arr <= 'Z') {
			let = *arr;
			return let;
		}

		return foo(arr + 1);
}


int main() { 

		
  char arr[] = "helLo worlD";

	
	printf("%c", foo(arr));

	return 0;

}	
