#include <stdio.h>

int smallest_index(int a[], int n){
	int minIndex = 0;
	
	for(int i = 0; i < n; i++){
		
		if(a[i] < a[minIndex]){
			minIndex = i;
		}
	}
	return minIndex;
}

int main(){
	int a[] = {1,2,4,5,10,100,2,-22};
	int n = sizeof(a) / sizeof(a[0]);
	int minIndex = smallest_index(a, n);
	printf("\nThe smallest element of the array found at index: %d\n", minIndex);
	return 0;
}