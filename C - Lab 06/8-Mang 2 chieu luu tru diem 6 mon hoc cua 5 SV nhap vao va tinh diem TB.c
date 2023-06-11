#include <stdio.h>

#define NUM_STUDENTS 5
#define NUM_SUBJECTS 6

int main() {
    char subjects[NUM_SUBJECTS][100];
    float scores[NUM_STUDENTS][NUM_SUBJECTS];
    float average[NUM_STUDENTS] = {0};
	
    // Nhập tên 6 môn học
    printf("Nhap ten 6 mon hoc:\n");
    for(int i = 0; i < NUM_SUBJECTS; i++) {
        printf("Mon hoc %d: ", i + 1);
		gets(subjects[i]);
    }

    // Nhập điểm cho 5 sinh viên
    for(int i = 0; i < NUM_STUDENTS; i++) {
        printf("\nNhap diem cho sinh vien %d:\n", i + 1);
        for(int j = 0; j < NUM_SUBJECTS; j++) {
            printf("Diem mon hoc %s: ", subjects[j]);
            scanf("%f", &scores[i][j]);
            average[i] += scores[i][j];
        }
        average[i] /= NUM_SUBJECTS;
    }

    // Hiển thị bảng lưu trữ điểm
    printf("\nBang luu tru diem:\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------\n");
	printf("|   Sinh vien   |");
	for(int i = 0; i < NUM_SUBJECTS; i++){
		printf("	%s	|", subjects[i]);
	}
	printf("	TB	|");
	printf("\n---------------------------------------------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("|  Sinh vien %d  |", i + 1);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("	%0.2f	|", scores[i][j]);
        }
        printf("	%0.2f	|", average[i]);
		printf("\n---------------------------------------------------------------------------------------------------------------------------------\n");
    }

    return 0;
}