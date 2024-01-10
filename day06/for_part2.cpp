#include<stdio.h>
int main() {

	/*for (int a = 1; a < 10; a++) {
		printf("====%d´Ü====\n", a);
		for (int b = 1; b < 10; b++) {
			printf("%d * %d = %d\n", a, b, a * b);
			
		}printf("===========\n");
	}*/
	int a;
	scanf_s("%d", &a);
	for (int b = 1; b <= a; b++) {
		printf("\n\n");
		for (int c = 1; c <= a; ++c) {
			printf("*");
		}
	}

	return 0;
}