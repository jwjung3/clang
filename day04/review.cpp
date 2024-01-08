#include<stdio.h>
int main() {
	//1.
	int a;
	printf("입력 : ");
	scanf_s("%d", &a);
	printf("%d분 %d초\n", a /60, a%60 );
	//2.
	/*int b;
	printf("입력 : ");
	scanf_s("%d", &b);
	printf("백의 자리 : %d", b % 10000%1000 / 100);*/
	/*int b;
	int b_overhundred = b / 100;
	int b_hundred = b_overhundred % 10;*/



	return 0;
}