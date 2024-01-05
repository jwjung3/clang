#include<stdio.h>
int main() {
	int l;
		printf("입력 : ");
	scanf_s("%d", &l);
	printf("정사각형의 넓이 : %d\n", l*l);
	printf("정사각형의 둘레 : %d\n", l * 4);

	int r;
	printf("입력 : ");
	scanf_s("%d", &r);
	printf("원의 둘레 : %.2lf\n", (double)r * 2 * 3.141592);
	printf("원의 넓이 : %.2lf", (double)r * r * 3.141592);
	
	return 0;
}