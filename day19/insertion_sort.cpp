#include<stdio.h>

int main() {

	int arr[] = { 6,4,3,7,15,13,2,1,9,8 };
	int size = sizeof(arr) / sizeof(int);

	for (int i = 1; i < size ; i++) {
		//���� ������ ����
		int key = arr[i];

		//���ĵ� �κ��� �������� Ž���ϸ鼭
		//key���� ū ���ҵ��� �� ĭ�� �ڷ� �б�
		int j;
		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];
		}
		//������ ��ġ�� key �ֱ�
		arr[j + 1] = key;
	}


	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}
}