#include<stdio.h>
int main() {
	int l;
		printf("�Է� : ");
	scanf_s("%d", &l);
	printf("���簢���� ���� : %d\n", l*l);
	printf("���簢���� �ѷ� : %d\n", l * 4);

	int r;
	printf("�Է� : ");
	scanf_s("%d", &r);
	printf("���� �ѷ� : %.2lf\n", (double)r * 2 * 3.141592);
	printf("���� ���� : %.2lf", (double)r * r * 3.141592);
	
	return 0;
}