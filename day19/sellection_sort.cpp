#include<stdio.h>

int main() {
	int arr[] = { 6,4,3,7,15,13,2,1,9,8 };
	int size = sizeof(arr) / sizeof(int);

	for (int i = 0; i < size - 1; i++) {
		//현재 위치를 최솟값으로 설정
		int min = i;
		//현재 위치 다음부터 배열 끝까지 최솟값 찾기
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
	for(int i=0;i<size;i++) {
		printf("%d", arr);
	}
}