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
	printf("정수 입력 : ");
	scanf_s("%d", &a);
	if (a > 0) {
		if (a % 2 == ) {
			printf("양의 짝수");
		}
		else { printf("양의 홀수"); }
	}
	else {
		if (a % 2 == 0) {
			if (a == 0) { printf("0"); }
			printf("음의 짝수");
		}
		else {
			printf("음의 홀수");
		}
	}

	return 0;
}