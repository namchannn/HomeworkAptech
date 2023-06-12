#include <stdio.h>

int main(){
	
	// Declaration
	int arr1[5] = {0,3,6,9,1};
	int arr2[6] = {1,0,2,6,4,5};
	
	// Find same elements
	printf("Same element: ");
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 6; j++){
			if(arr1[i] == arr2[j]){
				printf("%d ", arr1[i]);
				break;
			}
		}
	}
	return 0;
}