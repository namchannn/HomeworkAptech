#include <stdio.h>

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
	
	// Input elements
	printf("Enter elements for A: ");
	for(int i = 0; i < 5; i++){
		scanf("%d", &a[i]);
	}
	printf("\nEnter elements for B: ");
	for(int i = 0; i < 5; i++){
		scanf("%d", &b[i]);
	}
	tinhTong(a, b, c, 5);
	printf("\nMang A: ");
	inMang(a, 5);
	printf("Mang B: ");
	inMang(b, 5);
	printf("Mang C: ");
	inMang(c, 5);
	return 0;
}