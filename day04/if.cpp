#include<stdio.h>
int main() {
	// control statement(���)
	// �ڵ���� ������ ����
	
	// conditional stantement(���ǹ�)
	// [� �ڵ带 �������� ����]
	// 1) if/ else if / else
	// 2) switch

	/*int a;
	printf("�Է� : ");
	scanf_s("%d", &a);
	if (a > 20 && a < 30) {
		printf("�����մϴ�.");
	}*/
	//if ~ else
	/*int a;
	scanf_s("%d", &a);
	if (a > 0) {
		printf("����Դϴ�.");
	}
	else {
		printf("0 �Ǵ� �����Դϴ�.");
	}*/
	/*char a;
	scanf_s("%c", &a);
	if (a >= 65 && a <= 90) {
		printf("�빮��");
	}
	else{
		printf("�ҹ���");
	}*/
	int a;
	scanf_s("%d", &a);
	if (a % 2 == 0) {
		printf("¦�� �Դϴ�");
	}
	else {
		printf("Ȧ���Դϴ�.");
	}
	return 0;
}