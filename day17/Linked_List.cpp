#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Coffee {
	char name[50];
	int price;
}Coffee;

typedef struct Node {
	Coffee data;
	struct Node*next;
}Node;

Node* createNode() {
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));
	char name[50];
	printf("Ŀ�� �̸�: ");
	scanf("%s", name);

	int price;
	printf("����: ");
	scanf("%d", price);

	return newNode;
}

void appendNode(Node** head) {
	Node* newNode = createNode();
	Node* searcher = *head;
	if (searcher == NULL) {
		searcher = newNode;
		return;
	}
	while (searcher->next != NULL) {
		searcher = searcher->next;
	}
	searcher->next = newNode;
}

void printNode(Node**head) {
	Node* searcher = *head;
	while (searcher->next != NULL) {
		printf("Ŀ��:%s ����:%d\n", searcher->data.name, searcher->data.price);
		searcher = searcher->next;
	}
	printf("Ŀ��:%s ����:%d\n", searcher->data.name, searcher->data.price);
}

int main() {
	Node* head=NULL;
	appendNode(&head);
	appendNode(&head);
	printNode(&head);
	return 0;
}
