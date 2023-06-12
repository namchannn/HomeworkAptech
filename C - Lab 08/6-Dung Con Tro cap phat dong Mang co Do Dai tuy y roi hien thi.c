#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Creat function checkPrime
int checkPrime(int num){
	if(num <= 1){
		return false;
	}
	for(int i = 2; i * i <= num; i++){
		if(num % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	
	// Declaration
	int arr[100];
	int *ptr, n;
	ptr = (int*)malloc(n*sizeof(int));
	
	// Input
	printf("Enter number of element: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("Enter element number %d: ", i + 1);
		scanf("%d", &ptr[i]);
	}
	
	// Display entered elements
	printf("\nEntered elements:\n");
	for(int i = 0; i < n; i++){
		printf("%d ", ptr[i]);
	}
	
	// Display prime number
	printf("\nPrime elements:\n");
	for(int i = 0; i < n; i++){
		if(checkPrime(ptr[i])){ // Function call
			printf("%d ", ptr[i]);			
		}
	}
	return 0;
}