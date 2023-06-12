#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Creat check function
bool checkDoiXung(char *str){
	int i = 0;
	int j = strlen(str) - 1;
	while(i < j){
		if(str[i] != str[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main(){
	
	// Declaration
	char str[81];
	int low = 0;
	int high = strlen(str) - 1;
	
	// Input elements
	printf("Enter elements: ");
	scanf("%s", str);
	
	// Function call
	if(checkDoiXung(str)){
		printf("Chuoi nhap vao la chuoi doi xung.\n");
	}else{
		printf("Chuoi nhap vao khong phai la chuoi doi xung.\n");
	}
	return 0;
}