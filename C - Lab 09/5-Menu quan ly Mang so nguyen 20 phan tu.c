#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init(int ary[20]){
	srand(time(NULL));
	for(int i = 0; i < 20; i++){
		ary[i] = rand();
	}
}

void display(int ary[20]){
	for(int i = 0; i < 20; i++){
		printf("%d ", ary[i]);
	}
}

int getMax(int ary[20]){
	int max = ary[0];
	for(int i = 0; i < 20; i++){
		if(ary[i] > max){
			max = ary[i];
		}
	}
	return max;
}

int getAvg(int ary[20]){
	int sum = 0;
	for(int i = 0; i < 20; i++){
		sum += ary[i];
	}
	return sum / 20;
}

void findValue(int ary[20], int val){
	printf("Element same value of %d: ", val);
	int found = 0;
	for(int i = 0; i < 20; i++){
		if(ary[i] == val){
			ary[i] = val;
			printf("Found at index %d.", ary[i], i + 1);
			found = 1;
		}
	}
	if(!found){
		printf("Not found!");
	}
	printf("\n");
}

int main(){
	int ary[20];
	//init(ary);
	//printf("Element of array: ");
	//display(ary);
	int max = getMax(ary);
	//printf("\nLargest element: %d.\n", max);
	int avg = getAvg(ary);
	//printf("\nAverage value of elements: %d.\n", avg);
	int val;
	//printf("\nEnter searching value: ");
	//scanf("%d", &val);
	//findValue(ary, val);
	int flag = 1;
	char choice;
	printf("	ARRAY MANAGER	\n===============================\n	1. Init	\n	2. Display	\n	3. Max value	\n	4. Avg value	\n	5. Search by value	\n	6. Exit	\n===============================\n");
	
	while(flag){
		printf("\nChon: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				init(ary);
				break;
			case 2:
				printf("Element of array: ");
				display(ary);
				printf("\n");
				break;
			case 3:
				printf("Largest element: %d.\n", max);
				break;
			case 4:
				printf("nAverage element: %d.\n", avg);
				break;
			case 5:
				printf("Enter searching value: ");
				scanf("%d", &val);
				findValue(ary, val);
				break;
			case 6:
				flag = 0;
				printf("End programing!!!\n");
				break;
			default:
				printf("Enter not invalid!!!");
				break;
				
		}
	}
	return 0;
}