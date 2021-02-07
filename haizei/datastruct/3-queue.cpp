/*************************************************************************
	> File Name: 3-queue.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Nov 2020 08:20:42 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct Queue {
	int *data;
	int head, tail, length, size;
} Queue;

Queue *init(int n) {
	Queue *q = (Queue *)malloc(sizeof(Queue));
	q->data = (int *)malloc(sizeof(int) * n);
	q->length = n;
	q->head = q->tail = q->size = 0;
	return q;
}

int front(Queue *q) {
	return q->data[q->head];
}

int empty(Queue *q) {
	//return q->head == q->tail;
	return q->size == 0;
}

int expand(Queue *q) {
	int extr_size = q->length;
	int *p;
	while(extr_size) {
		p = (int *)malloc(sizeof(int) * (q->length + extr_size));
		if (p) break;
		extr_size >>= 1;
	}
	if (p == nullptr) return 0;
	for (int i = q->head, j = 0; j < q->size; j++) {
		p[j] = q->data[(i + j) % q->length];
	}
	free(q->data);
	q->data = p;
	q->length += extr_size;
	q->head = 0;
	q->tail = q->size;
	return 1;
}

int push(Queue *q, int value) {
	if (q == nullptr) return 0;
	//if (q->tail == q->length) return 0;
	if (q->size == q->length) {
		if (!expand(q)) {
			return 0;
		}
		printf("success to expand! Queue->size = %d ", q->length);
	}
	q->data[q->tail++] = value;
	if (q->tail == q->length) q->tail =0;
	q->size++;
	return 1;
}

int pop(Queue *q) {
	if (q == nullptr) return 0;
	if (empty(q)) return 0;
	q->head++;
	if (q->head == q->length) q->head = 0;
	q->size--;
	return 1;
}

void output(Queue *q) {
	if (q == nullptr) return;
	printf("Queue : [");
	for (int i = q->head, j = 0; j < q->size; i++, j++) {
		j && printf(", ");
		printf("%d", q->data[i % q->length]);
	}
	printf("]");
}

void clear(Queue *q) {
	if (q == nullptr) return;
	free(q->data);
	free(q);
	return;
} 


int main() {
	srand(time(NULL));
	#define max_op  20
	Queue *q = init(2);
	for (int i = 0; i < max_op; i++) {
		int val = rand() % 100 + 1;
		int op = rand() % 4;
		switch(op) {
			case 0:
			case 1:
			case 2: {
						printf("push %d to the Queue! ", val);
						printf("result = %d\n", push(q, val));
					} break;
			case 3: {
						printf("pop %d to the Queue! ", front(q));
						printf("result = %d\n", pop(q));
					} break;
		}
		output(q);
		printf("\n");
	}
	return 0;
}push 11 to the Stack result = 1
 Stack : [1, 45, 72, 100, 88, 22, 15, 11]

pop 11 to the Stack result = 1
 Stack : [1, 45, 72, 100, 88, 22, 15]
