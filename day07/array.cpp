#include<stdio.h>
int main() {
	//array[�迭]
	
	////1.�迭 ���� �� �ʱ�ȭ
	//int score[5] = {10,20,30,40,50};
	////2. �迭 ���� �� �ʱ�ȭ
	//int weight[] = { 100,200,300,400,500,600 };
	////3. �迭 ����
	//int height[10];
	////4. �迭�� �ε����� ���� 0!
	//height[0] = 188;

	/*int a[5];
	
	for (int i = 0; i < 5; i++) {
		printf("���� �Է� : ");
		scanf_s("%d", &a[i]);
	}
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		printf("%d��° �л� ���� : %d\n", i, score[i]);
	}
	printf("�� ��� : %lf", double(sum / 5));*/

	/*int a[5];
	for (int i=0; i < 5; i++) {
		printf("Ű �Է� : " );
		scanf_s("%d", &a);
	}
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		printf("%d��° �л� Ű : %lf\n", i, a[i]);
		sum += a[i];
	}
	printf("�� ��� Ű : %lf", sum / 5);*/

	//1��° char�迭 �����
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

	//// %c�� ���ڹ迭 ���
	//for (int i = 0; megacoffee[i] != '\0'; i++) {
	//	printf("%c", megacoffee[i]);
	//}

// %s�� ���� �迭 ���
	printf("%s\n", it);

	return 0;
}