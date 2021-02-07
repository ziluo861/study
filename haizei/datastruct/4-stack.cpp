/*************************************************************************
	> File Name: 4-stack.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 17 Nov 2020 07:44:49 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COLOR(a, b) "\033[" #b "m" a "\033[0m"
#define GREEN(a) COLOR(a, 32)

typedef struct Stack {
	int *data;
	int top, size;
} Stack;

Stack *init(int n) {
	Stack *sta = (Stack *)malloc(sizeof(Stack));
	sta->data = (int *)malloc(sizeof(int) * n);
	sta->size = n;
	sta->top = -1;
	return sta;
}

int top(Stack *sta) {
	return sta->data[sta->top];
}

int empty(Stack *sta) {
	return sta->top == -1;
}

int expand(Stack *sta) {
	int extr_size = sta->size;
	int *p;
	while(extr_size) {
		p = (int *)malloc(sizeof(int) * (extr_size + sta->size));
		if(p){
			break;
		}
		extr_size >>= 1;
	}
	if (p == nullptr) {
		return 0;
	}
	for (int i = 0; i <= sta->size; i++) {
		p[i] = sta->data[i];
	}
	free(sta->data);
	sta->data = p;
	sta->size += extr_size;
	return 1;
}

int push(Stack *sta, int value) {
	if (sta == nullptr) {
		return 0;
	}
	if (sta->top == sta->size - 1) {
		if (!expand(sta)) {
			return 0;
		}
		printf(GREEN("success to expand! Stack->size = %d "), sta->size);
	}
	sta->data[++(sta->top)] = value;
	return 1;
}

int pop(Stack *sta) {
	if (sta == nullptr) {
		return 0;
	}
	if (sta->top == -1) {
		return 0;
	}
	(sta->top)--;
	return 1;
}

void output(Stack *sta) {
	if (sta == nullptr) {
		return;
	}
	printf(" Stack : [");
	for (int i = 0; i <= sta->top; i++) {
		i && printf(", ");
		printf("%d", sta->data[i]);
	}
	printf("]\n");
	return;
}

void clear(Stack *sta) {
	if (sta == nullptr) return;
	free(sta->data);
	free(sta);
	return;
}

int main() {
	srand(time(NULL));
	#define max_op 20
	int flag;
	Stack *sta = init(3);
	for (int i = 0; i < max_op; i++) {
		int val = rand() % 100 + 1;
		int op = rand() % 4;
		switch(op) {
			case 0:
			case 1:
			case 2: {
						printf("push %d to the Stack ", val);
						printf("result = %d\n", push(sta, val));
					}break;
			case 3: {
						flag = !empty(sta);
						flag && printf("pop %d to the Stack ", top(sta));
						printf("result = %d\n", pop(sta));
					}break;
		}
		output(sta);
		printf("\n");
	}
	#undef max_op
	return 0;
}
