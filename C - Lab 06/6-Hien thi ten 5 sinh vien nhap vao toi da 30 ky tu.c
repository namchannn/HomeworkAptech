#include <stdio.h>

int main(){
	
	// Declaration
	char name[5][30];
	int i;
	
	// Input
	for(i = 0; i < 5; i++){
		printf("Enter name: ");
		gets(name[i]);
	}
	printf("\n");
	
	// Display
	for(i = 0; i < 5; i++){
		puts(name[i]);
	}
	return 0;
}
