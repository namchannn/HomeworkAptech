#include <stdio.h>

int main(){
	
	// Declaration
	int arr[10] = {12,8,23,8,25,8,90,21,11,90}, i;
	printf("arr[10] = {12,8,23,8,25,8,90,21,11,90}.\n\n");
	int maxValue = arr[0];
	int minValue = arr[0];
	for(i = 0; i < 10; i++){
		if(arr[i] > maxValue);
		maxValue = arr[i];
	}
	
	// Display
	printf("Element largest is %d,", maxValue);
	int count1 = 0;
	for(i = 0; i < 10; i++){
		if(arr[i] == maxValue){
			count1++;
		}
	}
	printf("display %d time.\n\n", count1);
	for(i = 0; i < 10; i++){
		if(arr[i] < minValue){
			minValue = arr[i];
		}
	}
	printf("Element smallest is %d,", minValue);
	int count2 = 0;
	for(i = 0; i < 10; i++){
		if(arr[i] == minValue){
			count2++;
		}
	}
	printf("display %d time.\n\n", count2);
	int sum = 0;
	for(i = 0; i < 10; i++){
		sum += arr[i];
	}
	printf("Sum of all elements in array is: %d\n\n", sum);
	printf("Average of all elements in array is: %0.2f\n", (float)sum / 10);
	return 0;
}
