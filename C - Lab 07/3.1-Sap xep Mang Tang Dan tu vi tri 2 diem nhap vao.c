#include <stdio.h>
#include <string.h>
int main(){
	// Declaration
	int arr[100];
	int n;
	
	// Input elements
	printf("Enter number of element: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("Enter element number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	// Display entered elements
	printf("Entered elements: \n");
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	// Enter low and high
	int j, k;
	printf("\nEnter low: ");
	scanf("%d", &j);
	printf("Enter high: ");
	scanf("%d", &k);
	if(j <= 0 || k > n || j > k){
		printf("low or high not invalid!\n");
		return 0;
	}
	
	// Bubble sort
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			
		}
	}
	printf("Sorted Array: \n");
	for(int i = j - 1; i < k; i++){
		printf("%d ", arr[i]);
	} 
	return 0;
}