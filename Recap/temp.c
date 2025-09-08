#include <stdio.h>

float fahr(float celc) {
	
	return (celc - 32) * 5/9;
}


int main() {
	float fahrenheit = 0;	
	printf("Input fahrenheit: ");
	scanf("%f", &fahrenheit);
		
	float celc = fahr(fahrenheit);
	
	printf("Celc: %.2f\n", celc);
	return 0;
}
