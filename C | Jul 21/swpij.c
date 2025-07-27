#include <stdio.h>

	int main() {
	    int num = 0;
	    int j = 0;
	    int i = 0;

    		
	    printf("Input number: ");
	    scanf("%d", &num);
	    printf("Input i: ");
	    scanf("%d", &i);
	    printf("Input j: ");
            scanf("%d", &j);
		
    

	    while (i < 0 || i > 31 || j < 0 || j > 31) {
	        printf("Error: choose right bits (0-31) ");
	        printf("Input i: ");
                scanf("%d", &i);
                printf("Input j: ");
                scanf("%d", &j);

	    }
    

	    int bit_i = (num >> i) & 1;
	    int bit_j = (num >> j) & 1;
    
    
	  if (bit_i != bit_j) {
      	      int temp = (1 << i) | (1 << j);
	       	num ^= temp;
    }
    
    printf("Result: %d\n", num);
    return 0;
}
