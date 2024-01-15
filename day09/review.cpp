#include<stdio.h>
int main() {
	
	char a[100];
	int count = 0;
	while (1) {
			char b;
			printf("ют╥б : ");
			scanf_s("%c", &b);
			getchar();
			if (b == '0') {
				a[count] = '\0';
				break;
			}
			a[count] = b - 32;
			count++;
	} 
	printf("%s", a);
	return 0;
}