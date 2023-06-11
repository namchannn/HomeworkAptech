#include <stdio.h>
#include <conio.h>

void main(){
	// Declaration
	int arr[100];
	int n = 0;
	int x;
	// Input elements
	while(1){
		printf("Enter element number %d: ", n + 1);
		scanf("%d", &arr[n]);
		if(arr[n] == 0){
			break;
		}else{
			n++;
		}
	}
	
	// Display entered elements
	printf("Entered element: \n");
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	// Enter element for searching
	printf("\nEnter element for searching: ");
	scanf("%d", &x);
	
	// Binary searching
	int low = 0;
	int high = n - 1;
	int flag = 0;
	while(low <= high){
		int mid = low + (high - low) / 2;
		if(x == arr[mid]){
			flag = 1;
			printf("Number %d found at position %d", x, mid);
			break;
		}else if(x < arr[mid]){
			high = mid - 1;
		}else if(x > arr[mid]){
			low = mid + 1;
		}
	}
	if(flag == 0){
		printf("Number %d not found", x);
	}
	getch();
}