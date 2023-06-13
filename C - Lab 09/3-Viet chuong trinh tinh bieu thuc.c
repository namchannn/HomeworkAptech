#include <stdio.h>

void menu(){
	printf("	TINH TOAN	\n================================\n	2. Tinh tong\n	3. Tinh hieu\n	4. Tinh tich\n	5. Tinh thuong\n	6. Thoat\n================================\n");
}

int sum(int a, int b){
	return (a + b);
}

int sub(int a, int b){
	return (a - b);
}

int multi(int a, int b){
	return (a * b);
}

double div(double a, double b){
		return (a / b);
}

int main(){
	int choice;
	int num1, num2;
	int flag = 1;
	menu();
	
	while(flag){
		printf("Chon: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 2:
				printf("Nhap so thu nhat: ");
				scanf("%d", &num1);
				printf("Nhap so thu hai: ");
				scanf("%d", &num2);
				printf("Tong hai so la: %d.\n\n", sum(num1, num2));
				break;
			case 3:
				printf("Nhap so thu nhat: ");
				scanf("%d", &num1);
				printf("Nhap so thu hai: ");
				scanf("%d", &num2);
				printf("Hieu hai so la: %d.\n\n", sub(num1, num2));
				break;
			case 4:
				printf("Nhap so thu nhat: ");
				scanf("%d", &num1);
				printf("Nhap so thu hai: ");
				scanf("%d", &num2);
				printf("Tich hai so la: %d.\n\n", multi(num1, num2));
				break;
			case 5:
				printf("Nhap so thu nhat: ");
				scanf("%d", &num1);
				printf("Nhap so thu hai: ");
				scanf("%d", &num2);
				if(num2 != 0){
					printf("Thuong hai so la: %0.2f.\n\n", div(num1, num2));
				}else{
					printf("Loi!!! So 0 khong the bi chia.\n\n");
				}
				break;
			case 6:
				printf("Ket thuc chuong trinh.\n\n");
				flag = 0;
				break;
			default:
				printf("Lua chon khong hop le, vui long chon lai.\n\n");
				break;
		}
	}
	return 0;
}