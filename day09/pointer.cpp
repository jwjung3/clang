#include<stdio.h>
int main() {
	//int a = 10;

	//= ���� ������
	//++ �ø��� ������
	//& �ּ�  ������
	//int* pa;
	//* ������ ������ = �ּҰ��� �ָ� �ű⿡ ��� ���� �����ٰ�
	/*int a = 10;
	int* pa = &a;

	printf("*pa: %d\n", *pa);
	printf("a: %d\n", a);
	printf("pa: %d\n", pa);
	printf("&a: %d\n", &a);*/
	int a = 10;
	int* pa = &a;
	* pa = 50;

	printf("%d", a);
}