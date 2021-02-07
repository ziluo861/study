/*************************************************************************
	> File Name: 6-table_to_tree.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 19 Nov 2020 08:24:02 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct Node {
	char data;
	struct Node *lchild;
	struct Node *rchild;
} Node;

typedef struct Tree {
	Node *root;
	int n;
} Tree;

typedef struct Stack {
	Node **data;
	int top;
	int size;
} Stack;

Node *GetNewNode(char value) {
	Node *p = (Node *)malloc(sizeof(Node));
	p->data = value;
	p->rchild = p->lchild = nullptr;
	return p;
}

Tree *GetNewTree() {
	Tree *tree = (Tree *)malloc(sizeof(Tree));
	tree->root = nullptr;
	tree->n = 0;
	return tree;
}

Stack *init(int n) {
	Stack *sta = (Stack *)malloc(sizeof(Stack));
	sta->data = (Node **)malloc(sizeof(Node *) * n);
	sta->top = -1;
	sta->size = n;
	return sta;
}

Node *top(Stack *sta) {
	return sta->data[sta->top];
}

int empty(Stack *sta) {
	return sta->top == -1;
}

int push(Stack *sta, Node *value) {
	if (sta == nullptr) {
		return 0;
	}
	if (sta->top == sta->size - 1) {
		return 0;
	}
	sta->data[++(sta->top)] = value;
	return 1;
}

int pop(Stack *sta) {
	if (sta == nullptr) {
		return 0;
	}
	if (empty(sta)) {
		return 0;
	}
	sta->top -= 1;
	return 1;
}

void clear_stack(Stack *sta) {
	if (sta == nullptr ){
		return ;
	}
	free(sta->data);
	free(sta);
	return ;
}

void clear_node(Node *node) {
	if (node == nullptr) {
		return;
	}
	clear_node(node->lchild);
	clear_node(node->rchild);
	free(node);
}

void clear_tree(Tree *tree) {
	if (tree == nullptr) {
		return;
	}
	clear_node(tree->root);
	free(tree);
	return;
}


Node *build(const char *str, int *node_num) {
	Stack *sta = init(strlen(str));
	int flag = 0;
	Node *temp = nullptr, *p = nullptr;
	while(str[0]) {
		switch(str[0]) {
			case '(' : {
				push(sta, temp);
				flag = 0;
			} break;
			case ')' : {
				p = top(sta);
				pop(sta);
					} break;
			case ',' : {
				flag = 1;
					} break;
			case ' ' : break;
			default:
				temp = GetNewNode(str[0]);
				if (!empty(sta) && flag == 0) {
					top(sta)->lchild = temp;
				} else if (!empty(sta) && flag == 1) {
					top(sta)->rchild = temp;
				}
				(*node_num)++;
				break;
		}
		++str;
	}
	clear_stack(sta);
	if (temp && !p) p = temp;
	return p;
}

void pre_order_node(Node *node) {
	if (node == nullptr) {
		return;
	}
	printf("%c ", node->data);
	pre_order_node(node->lchild);
	pre_order_node(node->rchild);
	return;
}

void pre_order(Tree *tree) {
	if (tree == nullptr) {
		return;
	}
	printf("pre_order : ");
	pre_order_node(tree->root);
	printf("\n");
	return;
}

void in_order_node(Node *node) {
	if (node == nullptr) {
		return;
	}
	in_order_node(node->lchild);
	printf("%c ", node->data);
	in_order_node(node->rchild);
	return;
}

void in_order(Tree *tree) {
	if (tree == nullptr) {
		return;
	}
	printf("in_order : ");
	in_order_node(tree->root);
	printf("\n");
	return;
}

void post_order_node(Node *node) {
	if (node == nullptr) {
		return;
	}
	post_order_node(node->lchild);
	post_order_node(node->rchild);
	printf("%c ", node->data);
	return;
}

void post_order(Tree *tree) {
	if (tree == nullptr) {
		return;
	}
	printf("post_order : ");
	post_order_node(tree->root);
	printf("\n");
	return;
}



int main() {

	char str[1000] = {0};
	int node_num = 0;
	scanf("%[^\n]s", str);
	Tree *tree = GetNewTree();
	tree->root = build(str, &node_num);
	tree->n = node_num;
	pre_order(tree);
	in_order(tree);
	post_order(tree);
	clear_tree(tree);
	return 0;
}
