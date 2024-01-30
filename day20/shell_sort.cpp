#include<stdio.h>

int main() {
	int arr[] = { 10,8,6,20,4,3,22,1,0,15,16 };
	int size = sizeof(arr) / sizeof(int);

	//gap�� �迭 ũ���� ���ݿ��� �����Ͽ� 1�� �� ������ ����
	for (int gap = size / 2; gap > 0; gap /= 2) {

		//�� ���ݿ� ����, ���ݸ�ŭ ������ ��ҵ��� �� �� ����
		for (int i = gap; i < size; i++) {
			//���� �˻��ϴ� ��Ҹ� ��� ����
			int temp = arr[i];
			int j = i;
			//������ ���ݸ�ŭ ������ ��ҵ��� �˻��ϸ� ����
			while (j >= gap && arr[j - gap] > temp) {
				arr[j] = arr[j - gap];
				j -= gap;
			}
			arr[j] = temp;
		}
	}
	for (int i = 0; i < size; i++)
		printf("%d\n", arr[i]);

	
	
	return 0;
}
