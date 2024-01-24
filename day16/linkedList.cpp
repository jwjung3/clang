#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node* next;
}node;

node* createNode(){
	node* newNode;
	newNode = (node*)malloc(sizeof(node));
	int newData;
	printf("데이터 입력: ");
	scanf("%d", &newData);
	newNode->data = newData;
	newNode->next = NULL;
	return newNode;
}

void appendNode(node** head) {
	node* newNode = createNode();
	if (*head == NULL) {
		*head = newNode;
		return;
	}

	node* searcher = *head;
	while (searcher->next != NULL) {
		searcher = searcher->next;
	}
	searcher->next = newNode;
}

void printNodes(node** head) {
	node* searcher = *head;
	while (searcher->next != NULL) {
		printf("%d->", searcher->data);
		searcher = searcher->next;
	}
	printf("%d", searcher->data);

}
int main() {
	node* head = NULL;
	while (1) {
		int system;
		printf("1.데이터 추가\n 2.데이터 확인\n 3.종료\n");
		printf("번호 입력: ");
		scanf("%d", &system);
		switch (system) {
		case 1:
			appendNode(&head);
			break;
		case 2:
			printNodes(&head);
			break;
		case 3:
			printf("종료");
			return 0;
		}
	}
	return 0;
}