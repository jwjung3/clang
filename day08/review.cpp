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
	} printf("�հ� : %d\n", sum);
	printf(" ��� : %.2lf\n", sum / b);
	printf("���� : %d\n", b);
	*/
	int codeNumber;
	while (1) {
		printf("1.���ϱ�\n2.����\n3.���ϱ�\n4.������\n5.����\n��ȣ �Է�:");
		scanf_s("%d", &codeNumber);
		switch (codeNumber) {
		case 1:
			int a, b;
			printf("ù ��° ���� �Է�:");
			scanf_s("%d", &a);
			printf("�ι�° ���� �Է�:");
			scanf_s("%d", &b);
			printf("%d + %d = %d", a, b, a + b);
			break;
		case 5:
			printf("���α׷� ����");
			return 0;
		default:
			printf("���ڸ� �߸� �Է��Ͽ����ϴ�. �ٽ� �Է�\n");
			break;
		}
	}
	


	return 0;
}