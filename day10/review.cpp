#include<stdio.h>
#include<string.h>
int main() {
	//int a = 10;
	//int b = 20;
	//int* pa;
	//pa = &a;
	//int* pb;
	// pb= &b;
	// int temp;
	// temp = *pa; //10
	// *pa = *pb; //20
	// *pb = temp;
	// printf("%d %d\n", a, b);

	/*char king = 'k';
	char queen = 'q';
	char* pking;
	char* pqueen;
	pking = &king;
	pqueen = &queen;
	char temp;
	temp = *pking;
	*pking = *pqueen;
	*pqueen = temp;
	printf("%c %c", king, queen);*/

	/*char coffee[] = "americano\n";
	char m[20];
	int n;
	scanf("%c", &m);
	getchar();
	scanf("%d", &n);*/

	/*char coffee[] = "americano";

	int num;
	printf("n을 입력");
	scanf("%d", &num);
	getchar();
	char alpha;
	printf("alphabet을 입력 : ");
	scanf("%c", &alpha);
	coffee[num] = alpha;
	printf("%s", coffee);*/

	char menu[4][20]{
		"americano",
		"latte",
		"vanilla",
	};

	char newMenu[20];
	printf("메뉴 추가 : ");
	scanf("%s", newMenu);
	strcpy(menu[], newMenu); // strcpy(어디에, 무엇을)

	for (int i = 0; i < 4; i++) {
		printf("%s\n", menu[i]);
	}

	
	

	
	return 0;
}