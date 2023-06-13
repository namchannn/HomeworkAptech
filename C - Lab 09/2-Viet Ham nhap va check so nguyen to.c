#include <stdio.h>

int inputNumber(int num){
	printf("Enter checking number: ");
	scanf("%d", &num);
	return num;
}

void checkNumber(int num){
	int flag = 0;
	if(num == 0 || num == 1){
		flag = 1;
	}
	for(int i = 2; i < num / 2; i++){
		if(num % i == 0){
			flag = 1;
			break;
		}
	}
	if(flag == 1){
		printf("Number %d is not Prime number.", num);
	}else{
		printf("Number %d is Prime number.", num);
	}
}

int main(){
	int num = inputNumber(num);
	checkNumber(num);
	return 0;
}