#include <stdio.h>
int main(){
	char subjects[6][100];
	float scores[5][6];
	float average[5] = {0};
	
	// Nhập tên 6 môn học
	printf("Nhap ten 6 mon hoc:\n");
	for(int i = 0; i < 6; i++){
		printf("Mon hoc %d: ", i + 1);
		gets(subjects[i]);
	}
	
	// Nhập điểm 5 sinh viên và tính điểm TB
	for(int i = 0; i < 5; i++){
		printf("\nNhap diem cho sinh vien %d:\n", i + 1);
		for(int j = 0; j < 6; j++){
			printf("Diem mon %s: ", subjects[j]);
			scanf("%f", &scores[i][j]);
			average[i] += scores[i][j];
		}
		average[i] /= 6;
	}
	
	// Hiển thị kết quả ra màn hình
	printf("\nBang luu tru diem:\n");
	printf("\n---------------------------------------------------------------------------------------------------------------------------------\n");
	printf("|	Hoc vien|");
	for(int i = 0; i < 6; i++){
		printf("	%s	|", subjects[i]);
	}
	printf("	TB	|");
	printf("\n---------------------------------------------------------------------------------------------------------------------------------\n");
	for(int i = 0; i < 5; i++){
		printf("|	HV %d	|", i + 1);
		for(int j = 0; j < 6; j++){
			printf("	%0.2f	|", scores[i][j]);
		}
		printf("	%0.2f	|", average[i]);
		printf("\n---------------------------------------------------------------------------------------------------------------------------------\n");
	}
	return 0;
}