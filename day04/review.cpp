#include<stdio.h>
int main() {
	//1.
	int a;
	printf("�Է� : ");
	scanf_s("%d", &a);
	printf("%d�� %d��\n", a /60, a%60 );
	//2.
	/*int b;
	printf("�Է� : ");
	scanf_s("%d", &b);
	printf("���� �ڸ� : %d", b % 10000%1000 / 100);*/
	/*int b;
	int b_overhundred = b / 100;
	int b_hundred = b_overhundred % 10;*/



	return 0;
}