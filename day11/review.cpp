#include<stdio.h>
int main() {
//	//커피 3종류(20글자 이하)
//	char coffee[3][20];
//	
//	for (int i = 0; i < 3; i++) {
//		printf("메뉴 입력:");
//		scanf("%s", coffee[i]);
//}
//	char(*pc)[20];
//	for (int i = 0; i < 3; i++) {
//		pc = &coffee[i];
//		printf("%d번째 메뉴:%s\n", i, pc);
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