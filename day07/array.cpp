#include<stdio.h>
int main() {
	//array[배열]
	
	////1.배열 선언 및 초기화
	//int score[5] = {10,20,30,40,50};
	////2. 배열 선언 및 초기화
	//int weight[] = { 100,200,300,400,500,600 };
	////3. 배열 선언
	//int height[10];
	////4. 배열의 인덱스의 시작 0!
	//height[0] = 188;

	/*int a[5];
	
	for (int i = 0; i < 5; i++) {
		printf("점수 입력 : ");
		scanf_s("%d", &a[i]);
	}
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		printf("%d번째 학생 점수 : %d\n", i, score[i]);
	}
	printf("반 평균 : %lf", double(sum / 5));*/

	/*int a[5];
	for (int i=0; i < 5; i++) {
		printf("키 입력 : " );
		scanf_s("%d", &a);
	}
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		printf("%d번째 학생 키 : %lf\n", i, a[i]);
		sum += a[i];
	}
	printf("반 평균 키 : %lf", sum / 5);*/

	//1번째 char배열 선언법
	char it[] = { 'm','e','g','a', '\0'};
	//printf(%d, sizeof(it)); //4byte
	for (int i = 0; i < sizeof(it); i++) {
		printf("%c", it[i]);
	}
	char starbucks[20] = { 'l','a','t','t', 'e', '\0'};
	char megacoffee[20];
	megacoffee[0] = 'l';
	megacoffee[1] = 'a';
	megacoffee[2] = 'a';
	megacoffee[3] = 'a'; 
	megacoffee[4] = '\0'; //null

	//// %c로 문자배열 출력
	//for (int i = 0; megacoffee[i] != '\0'; i++) {
	//	printf("%c", megacoffee[i]);
	//}

// %s로 문자 배열 출력
	printf("%s\n", it);

	return 0;
}