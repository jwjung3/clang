#include<stdio.h>
#include<string.h> //���ڿ��� Ưȭ
int main() {
	//char a[20];
	//scanf("%s", &a);
	////scanf_s("%s", &a, sizeof(a));
	//printf("%s", a);
	/*char a[30];
	printf("�Է� : ");
	scanf("%s", &a);
	for (int i = 0; i < sizeof(a) / sizeof(char); i++) {
		if (a[i] == '\0') break;
		if (i % 2 == 0) { a[i] = 'a'; }
	}
	printf("%s", a);*/
	//

	char bread[] = "icebread";
	//���ڿ� ���õ� �Լ� str~
	//string-length ���Ӹ�
	printf("% s�� ���̴� % d", bread, strlen(bread));
	printf("% s�� ���̴� % d", bread, sizeof(bread));
	return 0;
}