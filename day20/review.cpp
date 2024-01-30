#include<stdio.h>

int main() {
	int arr[] = { 6,4,1,7,3,9, 8};
	int size = sizeof(arr) / sizeof(int);
	for (int i = 1; i < size; i++) {
		int key = arr[i];
		int j;
		for ( j = i - 1; j >= 0&&arr[j]; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = key;
	}
	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}
}