//control statement(제어문)
//1)conditional statement(조건문)
//if, switch

#include<stdio.h>
int main() {
	for (int i = 0; i <= 100;i++ ) {
		if (i % 2 != 0)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}