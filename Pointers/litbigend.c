#include <stdio.h>
	int main(){
		int a = 1;
		char *byte = (char *)&a;

		if (*byte == 1){
			printf("Little-endian \n");
		} else {
			printf("Big-endian \n");
		}
		return 0;
	}
