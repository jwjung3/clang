#include<stdio.h>

int main() {

	//RAM : ����, ������ Ÿ��
	//Input : ��� 
	//Output : �Է�
	//Operator : ������
	//��������� 
	//+, -, *, /(������), %(������)
	//���Կ�����
	// = (���Կ�����)
	//int a = 1;//1
	//a += 10; //11
	//a += 100; // 111

	//�� ������
	// >, <, >=, <=, ==, !=(�ٸ���)
	// boolean = yes or no
	// boolean a = True or False
	// int a = 1(true) or 0(False);
	//�� �������� ����� : 1, 0
	
	// �� ������(����)
	// &&(and) : ��� true�̾�߸� true
	// ||(or) : �ϳ��� true�� true
	// !(not) : ����[�ݴ�]
	// ��𸣰� ��Ģ ����:
//1) 100������ ���� ������ �Է¹ް�
	// 10�ڸ��� 1�ڸ��� ����ϴ� ���α׷�
	/*int a;
	printf("�Է� : ");
	scanf_s("%d", &a);
	printf("10�� �ڸ� : %d\n1�� �ڸ� : %d", a/10, a%10);*/
	
	//���� ������
	//int a = 1;
	//a++; // 2
	//a++; // 3
	//printf("%d", ++a); // 3
	//// a==4
	//printf("%d", a++); // 4

	//���׿�����
	//���� ? �� : ��
	//char a = 3 > 1 ? 'a' : 'b';// ���̸� a �����̸� b
	// �� ������ �Է¹ް�, ū �� ����ϱ�
	/*int a;
	int b;
	printf("�Է� : ");
	scanf_s("%d", &a);
	printf("�Է� : ");
	scanf_s("%d", &b);
	//int bigger = a > b ? a: b;
	printf("ū �� : %d", bigger);*/
	int score;
	printf("�����Է� :");
	scanf_s("%d", &score);
	printf("��� : %c", score >= 70 ? 'A' : 'F');


	
	return 0;
}