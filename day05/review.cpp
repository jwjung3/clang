#include<stdio.h>
int main() {
	/*char a;
	scanf_s("%c", &a);
	if ((int)a >= 65 && (int)a <= 90) {
		printf("%c", (char)(a + 32));
	}
	else {
		printf("%c", a - 32);
	}*/
	int a;
	printf("���� �Է� : ");
	scanf_s("%d", &a);
	if (a > 0) {
		if (a % 2 == ) {
			printf("���� ¦��");
		}
		else { printf("���� Ȧ��"); }
	}
	else {
		if (a % 2 == 0) {
			if (a == 0) { printf("0"); }
			printf("���� ¦��");
		}
		else {
			printf("���� Ȧ��");
		}
	}

	return 0;
}