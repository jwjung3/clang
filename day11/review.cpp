#include<stdio.h>
int main() {
//	//Ŀ�� 3����(20���� ����)
//	char coffee[3][20];
//	
//	for (int i = 0; i < 3; i++) {
//		printf("�޴� �Է�:");
//		scanf("%s", coffee[i]);
//}
//	char(*pc)[20];
//	for (int i = 0; i < 3; i++) {
//		pc = &coffee[i];
//		printf("%d��° �޴�:%s\n", i, pc);
//	}
	
	int a = 10;
	int b = 20;
	int* pt;
	int** ppt;
	pt = &a;
	ppt = &pt;
	printf("**ppt: %d\n", **ppt);// a
	
	pt = &b;
		printf("**ppt: %d\n", **ppt); //b
	return 0;
}