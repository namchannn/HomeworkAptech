#include <stdio.h>
#include <stdbool.h>

// Check prime
bool prime(int num){
	if(num <= 1){
		return false;
	}
	int i;
	for(i = 2; i * i <= num; i++){
		if(num % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	
	// Declaration
	int arr[5], i;
	printf("Enter 5 prime to array:\n");
	for(i = 0; i < 5; i++){
		while(true){
			
			//Input
			printf("Enter element %d: ", i + 1);
			scanf("%d", &arr[i]);
			if(prime(arr[i])){
				break;
			}else{
				printf("Enter not invalid.\n");
			}
		}
	}
	
	// Display entered array
	printf("\nArray entered:\n\n");
	for(i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	
	// Find largest, smallest
	int maxValue = arr[0];
	int minValue = arr[0];
	for(i = 0; i < 5; i++){
		if(arr[i] > maxValue){
			maxValue = arr[i];
		}
		if(arr[i] < minValue){
			minValue = arr[i];
		}
	}
	
	// Display max, min
	printf("\n\nElement largest is %d.\n", maxValue);
	printf("Element smallest is %d.\n", minValue);
	return 0;
}
