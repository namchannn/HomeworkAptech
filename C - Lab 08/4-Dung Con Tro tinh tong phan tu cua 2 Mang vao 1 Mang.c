#include <stdio.h>
#include <stdlib.h>

void tinhTong(int *a, int *b, int *c, int n){
	for(int i = 0; i < n; i++){
		c[i] = a[i] + b[i];
	}
}

void inMang(int *mang, int n){
	for(int i = 0; i < n; i++){
		printf("%d ", mang[i]);
	}
	printf("\n");
}

int main(){
	// Declaration
	int a[5], b[5], c[5];
	int *ptr1, *ptr2, *ptr3;
	ptr1 = (int*)malloc(5*sizeof(int));
	ptr2 = (int*)malloc(5*sizeof(int));
	ptr3 = (int*)malloc(5*sizeof(int));
	// Input elements
	printf("Enter elements for A: ");
	for(int i = 0; i < 5; i++){
		scanf("%d", &a[i]);
	}
	printf("\nEnter elements for B: ");
	for(int i = 0; i < 5; i++){
		scanf("%d", &b[i]);
	}
	for(int i = 0; i < 5; i++){	//tinhTong(a, b, c, 5);
		c[i] = a[i] + b[i];
	}
	printf("\nMang A: ");
	for(int i = 0; i < 5; i++){ //inMang(a, 5);
		printf("%d ", a[i]);
	}
	printf("\nMang B: ");
	for(int i = 0; i < 5; i++){ //inMang(b, 5);
		printf("%d ", b[i]);
	} 
	printf("\nMang C: ");
	for(int i = 0; i < 5; i++){ //inMang(c, 5);
		printf("%d ", c[i]);
	} 
	return 0;
}