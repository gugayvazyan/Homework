#include <stdio.h>


int maxmin(int* arr) {
		
	static int max = 0;
	static int min = 0;
	static int init = 0; 
 	if (*arr == 0) return max;
	
	
	
    if (!init) {    
        max = *arr;
        min = *arr;
        init = 1;
    }
 
	if (*arr > max) max = *arr;
    if (*arr < min) min = *arr;
			
	
	return 	maxmin(arr + 1);
}



int main() {
    int arr[] = {5, 2, 8, 1, 9, 3};
    

    int result = maxmin(arr);  

    printf("Результат: %d\n", result);

    return 0;
}
