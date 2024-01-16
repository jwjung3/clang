#include<stdio.h>
int main() {
	/*int arr[5] = { 2,4,6,8,10 };*/
	//printf("%d", arr); // arr이 배열의 주솟값
	//printf("%d", &arr); // arr이 배열의 주솟값
	//printf("%d", &arr[0]);
	/*int* pa;
	pa = &arr[2];
	*pa = 100;

	for (int i = 0; i < 5; i++)
		printf("%d", arr[i]);
	printf("%d\n", arr + 1);
	printf("%d\n", *(arr + 1));

	for (int i = 0; i < 5; i++) {
		printf("%d\n", *(arr + i));
	}*/
	//int arr[3] = { 1,2,3 };
	//int(*pa)[3] = &arr; //배열 포인터

	//for (int i = 0; i < 4; i++) {
	//	printf("%d", (*pa)[i]);
	//}

	int matrix[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
	};
	int(*pa)[4] = &matrix[2];
	for (int i=0; i < 4; i++) {
		printf("%d\n", (*pa)[i]);
	}

}