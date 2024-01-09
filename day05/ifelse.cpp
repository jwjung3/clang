#include<stdio.h>
int main() {
	/*int eng = 80;
	
	if (eng > 90) {
		printf("A");
	}
	else if (eng > 80) {
		printf("B");
	}
	else if (eng > 70) {
		printf("C");
	}
	else {
		printf("F");
	}*/
	int a;
	printf("입력 : ");
	scanf_s("%d", &a);
	if (a < 90&& a>0) {
		printf("예각");
	}
	else if (a == 90) {
		printf("직각");
	}
	else if (a == 180) {
		printf("평각");
	}
	else {
		printf("둔각");
	}
	return 0;
}