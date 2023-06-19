#include <stdio.h>

int main(){
	int a[10];
	printf("Enter 10 integers\n");
	
	for(int i = 0; i < 10; i++){
		printf("a[%d]: ", i + 1);
		scanf("%d", &a[i]);
	}
	printf("Display in the reversed order\n");
	
	for(int i = 0; i < 10; i++){
		printf("%d\n", i + 1, a[9 - i]);
	}
	
	return 0;
}