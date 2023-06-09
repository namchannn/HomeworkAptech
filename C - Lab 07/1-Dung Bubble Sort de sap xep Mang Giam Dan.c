#include <stdio.h>
int main(){
	int arr[100];
	int n, i, j;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("Enter element number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n - i - 1; j++){
			if(arr[j] < arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("\nSort Array: \n\n");
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
