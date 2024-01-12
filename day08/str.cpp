#include<stdio.h>
#include<string.h> //문자열에 특화
int main() {
	//char a[20];
	//scanf("%s", &a);
	////scanf_s("%s", &a, sizeof(a));
	//printf("%s", a);
	/*char a[30];
	printf("입력 : ");
	scanf("%s", &a);
	for (int i = 0; i < sizeof(a) / sizeof(char); i++) {
		if (a[i] == '\0') break;
		if (i % 2 == 0) { a[i] = 'a'; }
	}
	printf("%s", a);*/
	//

	char bread[] = "icebread";
	//문자에 관련된 함수 str~
	//string-length 줄임말
	printf("% s의 길이는 % d", bread, strlen(bread));
	printf("% s의 길이는 % d", bread, sizeof(bread));
	return 0;
}