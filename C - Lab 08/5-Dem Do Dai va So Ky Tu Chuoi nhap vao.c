#include <stdio.h>

// Creat function stringLeng
int stringLength(const char* str){
	int length = 0;
	const char* current = str;
	while(*current != '\0'){
		length++;
		current++;
	}
	return length;
}

int main(){
	
	// Declaration
	char str[80];
	int length = 0;	
	const char* current = str;
	
	// Input
	printf("Moi nhap chuoi:");
	fflush(stdin);
	gets(str);
	
	// Count
//	length = stringLength(str);	// Funtion call
	while(*current != '\0'){
		length++;
		current++;
	}
	
	// Display
	printf("Do dai cua chuoi la: %d ky tu", length);
	return 0;
}