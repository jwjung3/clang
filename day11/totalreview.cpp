#include<stdio.h>
int main() {
	int x = 10;
	int* px = &x;
	int** ppx = &px;

	printf("x�� ��: %d\n", x);
	printf("x�� ��: %d\n", *px);
	printf("x�� ��: %d\n", **ppx);

	printf("x�� �ּڰ�: %D\n", &x);
	printf("x�� �ּڰ�: %d\n", px);
	printf("x�� �ּڰ�: %d\n", *ppx);

	printf("px�� ��: %d\n", &x);
	printf("px�� ��: %d\n", px);
	printf("px�� ��: %d\n", *ppx);

	printf("ppx�� �����Ͱ�: %d\n", *ppx);
	printf("ppx�� ���� �����Ͱ�: %d\n", **ppx);

	return 0;
}