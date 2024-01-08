#include<stdio.h>
int main() {
	//char a, b;
	//scanf_s("%c ", &a); //m
	////1.getchar(); //enter 흡수
	////2.scanf_s에 띄어쓰기 넣기
	//
	//scanf_s("%c", &b);//n
	//printf("%c %c", a, b);
	/*int a;
	printf("입력 : ");
	scanf_s("%d", &a);
	printf("아스키 코드 변환 결과 : %c", a);*/
	char a;
	int isCapital, isSmall, toAscii;
	printf("입력 : ");
	scanf_s("%c", &a);
	toAscii = (int)a;
	isCapital = (65 <= toAscii && toAscii <= 90);
	isSmall = (97 <= toAscii && toAscii <= 122);
	printf("%d", isCapital || isSmall ? 1 : 0);


//2.	
	/*char b;
	printf("입력 : ");
	scanf_s("%c", &b);
	printf("소문자로 변환 : %c", (char)((int)b + 32));*/

	return 0;
}