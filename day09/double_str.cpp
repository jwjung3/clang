#include<stdio.h>
int main() {
	char coffee[3][10];
	for (int i = 0; i < 3; i++) {
		printf("Ŀ�� �Է� : ");
		scanf("%s", &coffee[i]);
		getchar();
	}
	for (int i = 0; i < 3; i++) {
		printf("%s\n", coffee[i]);
	}
	return 0;
}