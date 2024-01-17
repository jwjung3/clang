#include<stdio.h>

int add(int x, int y) { return x + y; }
int minus(int x, int y) { return x - y; }
int multiply(int x, int y) { return x * y; }
/*oid printArray() {
	for (int i = 0; i < 10; i++) {
		printf("%d", x[i]);
	}*/
void swap(int* x, int* y) {
	int* temp = x;
	*x = *y;
	y = temp;
}
void swapchar(char* x, char* y) {
	char temp = *x;
	*x = *y;
	*y = temp;
}
int main() {
	/*int a = add(10, 20);
	printf("%d", a);*/
	/*int a = 5;
	int b = 8;
	printf("a:%d b:%d\n", a, b);
	swap(&a, &b);
	printf("a:%d b:%d\n", a, b);*/
	char a = 'a';
	char b = 'b';
	swapchar(&a, &b);
	printf("%c %c", a, b);
	return 0;
}