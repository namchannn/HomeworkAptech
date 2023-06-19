#include <stdio.h>

int power(int a, int n){
	int answer = 1;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &n);
	while(n > 0){
		answer *= a;
		n--;
	}
	printf("Result: %d", answer);
}

int main(){
	// Declaration
	int a, n;
	
	// Function call
	power(a, n);
	return 0;
}