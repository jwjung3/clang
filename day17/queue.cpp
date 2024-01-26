#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct QueueNode {
	int data;
	struct QueueNode* next;
}QueueNode;

typedef struct Queue {
	QueueNode* front;
	QueueNode* rear;
}Queue;

void initQueue(Queue* q) {
	q->front = NULL;
	q->rear = NULL;
}


QueueNode* createNode() {
	QueueNode* newNode;
	newNode = (QueueNode*)malloc(sizeof(QueueNode));
	int num;
	scanf("%d", num);
	newNode->data = num;
	newNode->next = NULL;
	return newNode;
}


void enqueue(Queue* q) {
	QueueNode* newNode;
	newNode = createNode();

	if (q->front == NULL) {
		q->front = newNode;
	}
	else {
		q->rear->next = newNode;
	}
	q->rear = newNode;
}

void printQueue(Queue* q) {
	if (q->front == NULL) {
		printf("x\n");
		return;
	}
	QueueNode* searcher = q->front;
	while (searcher != NULL) {
		printf("%d->", searcher->data);
		searcher = searcher->next;
	}
	printf("%d", searcher->data);
	printf("\n");
}

void dequeue(Queue*q) {
	if (q->front == NULL) {
		printf("x\n");
		return;
	}
	QueueNode* target = q->front;
	printf("%d�� �����ϴ�.\n", target->data);
q->front = target->next;

if (q->front == NULL) {
	q->rear = NULL;
}
free(target);
}

int main() {
	Queue q;
	initQueue(&q);

	enqueue(&q);
	enqueue(&q);
	enqueue(&q);
	printQueue(&q);
	dequeue(&q);
	printQueue(&q);
	return 0;
}