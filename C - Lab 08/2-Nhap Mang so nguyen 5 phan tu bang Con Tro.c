#include <stdio.h>
#include <stdlib.h>

int main(){
	// Declaration
	int arr[5];
	int *ptr;
	ptr = (int*)malloc(5*sizeof(int));
	
	// Input elements
	for(int i = 0; i < 5; i++){
		printf("Enter element number %d: ", i + 1);
		scanf("%d", &ptr[i]);
	}
	
	// Display entered elements
	printf("Entered elements: \n");
	for(int i = 0; i < 5; i++){
		printf("%d ", ptr[i]);
	}
	return 0;
}