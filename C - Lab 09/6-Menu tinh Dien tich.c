#include <stdio.h>

double dt_HTamgiac(double a, double h){ // Khai báo a là cạnh đáy, h là chiều cao
	return ((a * h) / 2);
}

int dt_HChunhat(int a, int b){ // Khai báo a là chiều dài, b là chiều rộng
	return (a * b);
}

double dt_HThang(double a, double b, double h){ // Khai báo a là đáy lớn, b là đáy nhỏ, h là chiều cao
	return ((a + b) * h / 2);
}

double dt_HTron(double r, double pi){ // Khai báo r là bán kính
	pi = 3.14;
	return (r * r * pi);
}

int main(){
	int a, b, h, r, pi;
	char choice = 0;
	int flag = 1;
	printf("	TINH DIEN TICH	\n================================\n	1. Tam giac	\n	2. Chu nhat	\n	3. Hinh thang	\n	4. Hinh tron	\n	5. Thoat	\n================================\n");
	while(flag){
		printf("Chon: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				printf("Nhap canh day: ");
				scanf("%d", &a);
				printf("Nhap chieu cao: ");
				scanf("%d", &h);
				printf("Dien tich hinh tam giac la: %0.2f.\n\n", dt_HTamgiac(a, h));
				break;
			case 2:
				printf("Nhap chieu dai: ");
				scanf("%d", &a);
				printf("Nhap chieu rong: ");
				scanf("%d", &b);
				printf("Dien tich hinh chu nhat la: %d\n\n", dt_HChunhat(a, b));
				break;
			case 3:
				printf("Nhap day lon: ");
				scanf("%d", &a);
				printf("Nhap day nho: ");
				scanf("%d", &b);
				printf("Nhap chieu cao: ");
				scanf("%d", &h);
				printf("Dien tich hinh thang la: %0.2f\n\n", dt_HThang(a, b, h));
				break;
			case 4:
				printf("Nhap ban kinh: ");
				scanf("%d", &r);
				printf("Dien tich hinh tron la: %0.2f\n\n", dt_HTron(r, pi));
				break;
			case 5:
				flag = 0;
				printf("Ket thuc chuong trinh.\n\n");
				break;
			default:
				printf("Not Invalid!!!\n\n");
				break;
		}
	}
	return 0;
}