/*************************************************************************
	> File Name: 2-linklist.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 20 Nov 2020 08:07:17 AM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct ListNode {
	int data;
	ListNode *next;
}ListNode;

typedef struct LinkedList {
	ListNode head;
	int length;
}LinkedList;

ListNode *GetNewNode(int n) {
	ListNode *p = (ListNode *)malloc(sizeof(ListNode));
	p->data = n;
	p->next = nullptr;
	return p;
}

LinkedList *GetNewList() {
	LinkedList *list = (LinkedList *)malloc(sizeof(LinkedList));
	list->head.next = nullptr;
	list->length = 0;
	return list;
}

void clear_node(ListNode *node) {
	if (node == nullptr) {
		return ;
	}
	free(node);
}

void clear(LinkedList *list) {
	if (list == nullptr) {
		return;
	}
	ListNode *p = list->head.next, *q;
	while(p) {
		q = p->next;
		clear_node(p);
		p = q;
	}
	free(list);
	return;
}

int insert(LinkedList *list, int index, int value) {
	if (list ==nullptr) {
		return 0;
	}
	if (index < 0 || index > list->length) {
		return 0;
	}
	ListNode *p = &(list->head), *node = GetNewNode(value);
	while(index--){
		p = p->next;
	}
	node->next = p->next;
	p->next = node;
	list->length += 1;
	return 1;
}

int erase(LinkedList *list, int index) {
	if (list == nullptr) {
		return 0;
	}
	if (index < 0 || index > list->length) {
		return 0;
	}
	ListNode *p = &(list->head), *q;
	while(index--) {
		p = p->next;
	}
	q = p->next;
	p->next = q->next;
	free(q);
	list->length -= 1;
	return 1;
}

void output(LinkedList *p) {
	if (p ==nullptr) {
		return ;
	}
	printf("List(%d) = [", p->length);
	for (ListNode *l = p->head.next; l; l = l->next) {
		printf("%d->", l->data);
	}
	printf("NULL]\n");
}

void rev(LinkedList *l) {
	if (l == nullptr) return;
	ListNode *p = l->head.next, *q;
	l->head.next = nullptr;
	while(p) {
		q = p->next;
		p->next = l->head.next;
		l->head.next = p;
		p = q;
	}
	return;
}

int main() {
	srand(time(NULL));
#define max_op 20
	LinkedList *l = GetNewList();
	for (int i = 0; i < max_op; i++) {
		int val = rand() % 100 + 1;
		int ind = rand() % (l->length + 3) - 1;
		int op = rand() % 4;
		switch(op) {
			case 0:
			case 1:
			case 2: {
				printf("insert %d at %d to List = %d\n", val, ind, insert(l, ind, val));
				}break;
			case 3: {
				printf("erase a iterm at %d from List = %d\n", ind, erase(l, ind));
				} break;
		}
		output(l);
		printf("\n");
	}
#undef max_op
	clear(l);

	return 0;
}
