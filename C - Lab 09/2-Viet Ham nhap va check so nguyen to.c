#include <stdio.h>

int inputNumber(){
	int num;
	printf("Enter checking number: ");
	scanf("%d", &num);
	return num;
}

void checkNumber(int num){
	int flag = 1;
	
    if(num < 2){
        flag = 0;
    }else{
        for(int i = 2; i <= num / 2; i++){
            if(num % i == 0){
                flag = 0;
                break;
            }
        }
    }
    if(flag){
        printf("So %d la so nguyen to.\n", num);
    }else{
        printf("So %d khong phai so nguyen to.\n", num);
    }
}

int main(){
	char choice;
	
	do{
		int num = inputNumber(num);
		checkNumber(num);
		printf("Ban co muon tiep tuc khong? (y/n): ");
		fflush(stdin);
		scanf("%c", &choice);
	}while(choice == 'y' || choice == 'Y');
	return 0;
}