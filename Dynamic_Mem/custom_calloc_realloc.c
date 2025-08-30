#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* custom_calloc(size_t num, size_t size) {
	
	void* arr = malloc(num * size); 

	return arr;
}



void* custom_realloc(void* ptr, size_t nums) {

    void* tmp = malloc(nums);
 
   
    memcpy(tmp, ptr, nums);  
    free(ptr);  
    return tmp;
}  
	
int main() {
	
	int n = 0;
	printf("Please input arr size: ");
	scanf("%d", &n);

	int* arr = custom_calloc(n, sizeof(int));

    printf("Input %d numbers:\n", n);
    for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);

    printf("Your numbers: ");
    for (int i = 0; i < n; ++i) printf("%d ", arr[i]);
    printf("\n");

	int m = 0;
	printf("Input your new arr size: ");
	scanf("%d", &m);
	
	arr = custom_realloc(arr, sizeof(int) * m);
	
	printf("Input %d new numbers:\n", m - n);
    for (int i = n; i < m; ++i) scanf("%d", &arr[i]);

    printf("Updated numbers: ");
    for (int i = 0; i < m; ++i) printf("%d ", arr[i]);
    printf("\n");	
	
	
	
	free(arr);
	arr = NULL;

	return 0;
}
	
