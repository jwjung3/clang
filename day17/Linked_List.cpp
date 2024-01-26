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
	printf("커피 이름: ");
	scanf("%s", name);

	int price;
	printf("가격: ");
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
		printf("커피:%s 가격:%d\n", searcher->data.name, searcher->data.price);
		searcher = searcher->next;
	}
	printf("커피:%s 가격:%d\n", searcher->data.name, searcher->data.price);
}

int main() {
	Node* head=NULL;
	appendNode(&head);
	appendNode(&head);
	printNode(&head);
	return 0;
}
