#include<stdio.h>
int main() {
	/*int eng = 80;
	
	if (eng > 90) {
		printf("A");
	}
	else if (eng > 80) {
		printf("B");
	}
	else if (eng > 70) {
		printf("C");
	}
	else {
		printf("F");
	}*/
	int a;
	printf("�Է� : ");
	scanf_s("%d", &a);
	if (a < 90&& a>0) {
		printf("����");
	}
	else if (a == 90) {
		printf("����");
	}
	else if (a == 180) {
		printf("��");
	}
	else {
		printf("�а�");
	}
	return 0;
}