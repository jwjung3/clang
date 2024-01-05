#include<stdio.h>

int main() {

	//RAM : 변수, 데이터 타입
	//Input : 출력 
	//Output : 입력
	//Operator : 연산자
	//산술연산자 
	//+, -, *, /(나눗셈), %(나머지)
	//대입연산자
	// = (대입연산자)
	//int a = 1;//1
	//a += 10; //11
	//a += 100; // 111

	//비교 연산자
	// >, <, >=, <=, ==, !=(다르다)
	// boolean = yes or no
	// boolean a = True or False
	// int a = 1(true) or 0(False);
	//비교 연산자의 결과값 : 1, 0
	
	// 논리 연산자(집합)
	// &&(and) : 모두 true이어야만 true
	// ||(or) : 하나라도 true면 true
	// !(not) : 부정[반대]
	// 드모르간 법칙 적용:
//1) 100이하의 양의 정수를 입력받고
	// 10자리와 1자리를 출력하는 프로그램
	/*int a;
	printf("입력 : ");
	scanf_s("%d", &a);
	printf("10의 자리 : %d\n1의 자리 : %d", a/10, a%10);*/
	
	//증감 연산자
	//int a = 1;
	//a++; // 2
	//a++; // 3
	//printf("%d", ++a); // 3
	//// a==4
	//printf("%d", a++); // 4

	//삼항연산자
	//조건 ? 값 : 값
	//char a = 3 > 1 ? 'a' : 'b';// 참이면 a 거짓이면 b
	// 두 정수를 입력받고, 큰 수 출력하기
	/*int a;
	int b;
	printf("입력 : ");
	scanf_s("%d", &a);
	printf("입력 : ");
	scanf_s("%d", &b);
	//int bigger = a > b ? a: b;
	printf("큰 수 : %d", bigger);*/
	int score;
	printf("점수입력 :");
	scanf_s("%d", &score);
	printf("등급 : %c", score >= 70 ? 'A' : 'F');


	
	return 0;
}