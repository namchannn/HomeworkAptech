#include <stdio.h>

int main(){
	
	// Declaration
	int arr[10], i;
	
	// Input
	printf("Enter 10 element to the array: ");
	for(i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	printf("\n");
	
	// Display
	for(i = 0; i < 10; i++){
		if(i % 2 == 0){
			printf("%d ", arr[i]);
		}
	}
	return 0;
}
