#include<stdio.h>
int main() {
	// control statement(제어문)
	// 코드실행 순서를 조작
	
	// conditional stantement(조건문)
	// [어떤 코드를 실행할지 결정]
	// 1) if/ else if / else
	// 2) switch

	/*int a;
	printf("입력 : ");
	scanf_s("%d", &a);
	if (a > 20 && a < 30) {
		printf("축하합니다.");
	}*/
	//if ~ else
	/*int a;
	scanf_s("%d", &a);
	if (a > 0) {
		printf("양수입니다.");
	}
	else {
		printf("0 또는 음수입니다.");
	}*/
	/*char a;
	scanf_s("%c", &a);
	if (a >= 65 && a <= 90) {
		printf("대문자");
	}
	else{
		printf("소문자");
	}*/
	int a;
	scanf_s("%d", &a);
	if (a % 2 == 0) {
		printf("짝수 입니다");
	}
	else {
		printf("홀수입니다.");
	}
	return 0;
}