#include <stdio.h>
int main(){
	char name[5][30];
	int i;
	for(i = 0; i < 5; i++){
		printf("Enter name: ");
		gets(name[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++){
		puts(name[i]);
	}
	return 0;
}
