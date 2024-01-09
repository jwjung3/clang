#include<stdio.h>
int main() {
	//char alpha = 'b';
	//switch (alpha) {
	//case 'a':
	//	printf("a를 선택하셨군요!");
	//	break;//break 필수
	//case 'b':
	//	printf("b를 선택하셨군요!");
	//	break; //break 필수
	//default:
	//	printf("선택하신 알파벳이 없음");
	//	break;
	//}
	
	/*int month;
	printf("입력 : ");
	scanf_s("%d", &month);
	switch (month) {
	case 1:
		printf("1월입니다.");
		break;
	case 2: 
		printf("2월입니다.");
		break;
	default:
		printf("3월입니다.");
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
		printf("오류");
		break;
	}
	

	return 0;
}