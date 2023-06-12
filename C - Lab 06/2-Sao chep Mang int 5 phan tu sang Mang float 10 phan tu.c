#include <stdio.h>

int main(){
	
	// Declaration
	int intArr[5], i;
	float floatArr[10];
	
	// Input
	printf("Enter 5 element in to the integer Array: \n");
	for(i = 0; i < 5; i++){
		printf("Enter element %d: ", i + 1);
		scanf("%d", &intArr[i]);
	}
	
	// Display
	printf("\nInteger Array: ");
	for(i = 0; i < 5; i++){
		printf("%d ", intArr[i]);
	}
	printf("\n\nFloat Array: ");
	for(i = 0; i < 10; i++){
		floatArr[i] = (float)intArr[i];
		if(i < 5){
			printf("%0.2f ", floatArr[i]);
		}
	}
	for(i = 5; i < 10; i++){
		floatArr[i] = 0;
		printf("%0.2f ", floatArr[i]);
	}
	return 0;
}
