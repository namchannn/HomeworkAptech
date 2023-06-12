#include <stdio.h>

// Creat swap function
void swap1(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	
	// Declaration
	int a = 5;
	int b = 10;
	
	// Display
	printf("Stock");
	printf("\nGia tri cua a: %d", a);
	printf("\nDia chi cua a: %d", &a);
	printf("\nGia tri cua b: %d", b);
	printf("\nDia chi cua b: %d", &b);
	
	// Swap
	printf("\n\nSwapped");
	swap1(&a, &b); // Gọi và truyền tham chiếu aka by reference
	printf("\nGia tri cua a: %d", a);
	printf("\nDia chi cua a: %d", &a);
	printf("\nGia tri cua b: %d", b);
	printf("\nDia chi cua b: %d", &b);
	return 0;
}