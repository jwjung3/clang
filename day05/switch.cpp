#include<stdio.h>
int main() {
	//char alpha = 'b';
	//switch (alpha) {
	//case 'a':
	//	printf("a�� �����ϼ̱���!");
	//	break;//break �ʼ�
	//case 'b':
	//	printf("b�� �����ϼ̱���!");
	//	break; //break �ʼ�
	//default:
	//	printf("�����Ͻ� ���ĺ��� ����");
	//	break;
	//}
	
	/*int month;
	printf("�Է� : ");
	scanf_s("%d", &month);
	switch (month) {
	case 1:
		printf("1���Դϴ�.");
		break;
	case 2: 
		printf("2���Դϴ�.");
		break;
	default:
		printf("3���Դϴ�.");
		break;
	}*/

	int a;
	int b;
	char c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	getchar();
	scanf_s("%c", &c);
	
	switch (c) {
	case '+':
		printf("%d + %d = %d", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d", a, b, a * b);
		break;
	default:
		printf("����");
		break;
	}
	

	return 0;
}