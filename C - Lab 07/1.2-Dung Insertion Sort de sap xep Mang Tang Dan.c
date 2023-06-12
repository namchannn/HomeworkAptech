#include <stdio.h>
#include <conio.h>

void main(){
	
	// Declaration
	int arr[100];
	int n, temp;
	
	// Input elements
	printf("Enter number of element: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("Enter element number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	// Insertion sort
	for(int j = 0; j < n; j++){
		int i = j - 1;
		temp = arr[j];
		while((i >= 0) && (temp < arr[i])){
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = temp;
	}
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	getch();
}