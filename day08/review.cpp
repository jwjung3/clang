#include<stdio.h>
int main() {
	/*int a;
	int sum = 0;
	scanf_s("%d", &a);
	for (int i = 0; i <= a; i++) {
		if (i % 2 == 1) {
			sum += i;
		}
	} 
	printf("%d", sum);*/

	/*int a;
	int sum = 0;
	double sum1 = 0;
	int c = 1;
	while (1) {
		int b = c++;
		scanf_s("%d", &a);
		sum += a;
		if (a <= 0) break;
	} printf("합계 : %d\n", sum);
	printf(" 평균 : %.2lf\n", sum / b);
	printf("개수 : %d\n", b);
	*/
	int codeNumber;
	while (1) {
		printf("1.더하기\n2.빼기\n3.곱하기\n4.나누기\n5.종료\n번호 입력:");
		scanf_s("%d", &codeNumber);
		switch (codeNumber) {
		case 1:
			int a, b;
			printf("첫 번째 정수 입력:");
			scanf_s("%d", &a);
			printf("두번째 정수 입력:");
			scanf_s("%d", &b);
			printf("%d + %d = %d", a, b, a + b);
			break;
		case 5:
			printf("프로그램 종료");
			return 0;
		default:
			printf("숫자를 잘못 입력하였습니다. 다시 입력\n");
			break;
		}
	}
	


	return 0;
}