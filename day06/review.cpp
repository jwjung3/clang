#include<stdio.h>
int main() {
	/*int a;
	printf("입력 : ");
	scanf_s("%d", &a);
	if (a < 0) {
		printf("추우므로 실내활동 권장");
	}
	else if (0 <= a && a < 40) {
		printf("쾌적하므로 실외활동 권장");
	}
	else if (a>=40) { printf("더우므로 실내활동 권장"); }*/

	/*int a;
	int b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	if (b*b==a) {
		printf("%d * %d=%d", b, b, a);
	}
	else if (a * a == b) {
		printf("%d*%d=%d", a, a, b);
	}
	else { printf("none"); }*/

	int a, b, c, d, e;
	int sum = 0;
	scanf_s("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);
	if (a > 0) {
		sum += a;
	}
	if (b > 0) {
		sum += b;
	}
	if (c > 0) {
		sum += c;
		}
	if (d > 0) {
		sum += d;
			}
	if (e > 0) {
		sum += e;
				}
	
	
		return 0;
}