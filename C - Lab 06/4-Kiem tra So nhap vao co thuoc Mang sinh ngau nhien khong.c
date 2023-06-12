#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

// Declaration 
void randomize(int a[], int size);
int checkArray(int a[], int size, int n);

int main(){
	
	// Declaration
	int number;
	int size = 20;
	int a[size];
	
	// Input
	printf("20 random elements in Array:\n");
	randomize(a, size);
	printf("\n\nEnter searching number: ");
	scanf("%d", &number);
	
	// Function call
	if(checkArray(a, size, number)){
		printf("Number %d found in Array.\n", number);
	}else{
		printf("Number %d not found in Array.\n", number);
	}
	return 0;
}

// Creat function randomize
void randomize(int a[], int size){
	srand((unsigned)time(NULL));
	for(int i = 0; i < size; i++){
		a[i] = rand();
		printf("%d ", a[i]);
	}
}

// Creat function checkArray
int checkArray(int a[], int size, int n){
	for(int i = 0; i < size; i++){
		if(a[i] == n){
			return 1;
		}
	}
	return 0;
}