#include<stdio.h>
int main() {
	//char a, b;
	//scanf_s("%c ", &a); //m
	////1.getchar(); //enter ���
	////2.scanf_s�� ���� �ֱ�
	//
	//scanf_s("%c", &b);//n
	//printf("%c %c", a, b);
	/*int a;
	printf("�Է� : ");
	scanf_s("%d", &a);
	printf("�ƽ�Ű �ڵ� ��ȯ ��� : %c", a);*/
	char a;
	int isCapital, isSmall, toAscii;
	printf("�Է� : ");
	scanf_s("%c", &a);
	toAscii = (int)a;
	isCapital = (65 <= toAscii && toAscii <= 90);
	isSmall = (97 <= toAscii && toAscii <= 122);
	printf("%d", isCapital || isSmall ? 1 : 0);


//2.	
	/*char b;
	printf("�Է� : ");
	scanf_s("%c", &b);
	printf("�ҹ��ڷ� ��ȯ : %c", (char)((int)b + 32));*/

	return 0;
}