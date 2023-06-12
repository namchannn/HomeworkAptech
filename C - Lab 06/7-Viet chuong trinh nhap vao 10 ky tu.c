#include <stdio.h>

int main(){
	
	// Declaration
	char c[10];
	int count = 0, i;
	
	// Input
	printf("Enter not over 10 characters: ");
	while(count < 10){
		char ch = getchar();
		if(ch == '\n'){
			break;
		}
		c[count] = ch;
		count++;
	}
	
	// Display
	printf("\nList character entered:\n\n");
	for(i = 0; i < count; i++){
		printf("Character: %c, Code ASCII: %d\n", c[i], c[i]);
	}
	return 0;
}
