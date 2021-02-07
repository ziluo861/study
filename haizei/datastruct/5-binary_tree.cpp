/*************************************************************************
	> File Name: 5-binary_tree.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 19 Nov 2020 07:26:29 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COLOR(a, b) "\033[" #b "m" a "\033[0m"
#define GREEN(a) COLOR(a, 32)
#define RED(a) COLOR(a, 31)
#define YELLOW(a) COLOR(a, 33)
#define PURPLE(a) COLOR(a, 35)
typedef struct Node {
	int data;
	struct Node *lchild;
	struct Node *rchild;
} Node;

typedef struct Tree {
	Node *root;
	int n;//n个节点

} Tree;

Node *GetNewNode(int val) {
	Node *p = (Node *)malloc(sizeof(Node));
	p->data = val;
	p->lchild = p->rchild = nullptr;
	return p;
}

Tree *GetNewTree() {
	Tree *tree = (Tree *)malloc(sizeof(Tree));
	tree->root = nullptr;
	tree->n = 0;
	return tree;
}

void clearNode(Node *node) {
	if (node == nullptr) return;
	clearNode(node->lchild);
	clearNode(node->rchild);
	free(node);
	return;
}

void clear(Tree *tree) {
	if (tree == nullptr) return;
	clearNode(tree->root);
	free(tree);
	return;
}

Node *insert_node(Node *root, int val, int *flag) {
	if (root == nullptr) {
		*flag = 1;
		return GetNewNode(val);
	}
	if (root->data == val) {
		return root;
	}
	if (root->data > val) {
		root->lchild = insert_node(root->lchild, val, flag);
	} else {
		root->rchild = insert_node(root->rchild, val, flag);
	}
	return root;
}

void insert(Tree *tree, int value) {
	int flag = 0;
	tree->root = insert_node(tree->root, value, &flag);
	tree->n += flag;
}

void pre_order_node(Node *node) {
	if (node == nullptr) {
		return ;
	}
	printf(GREEN("%d "), node->data);
	pre_order_node(node->lchild);
	pre_order_node(node->rchild);
	return;
}

void pre_order(Tree *tree) {
	if (tree == nullptr) {
		return;
	}
	printf("pre_order: ");
	pre_order_node(tree->root);
	printf("\n");
}

void in_order_node(Node *node) {
	if (node == nullptr) {
		return ;
	}
	in_order_node(node->lchild);
	printf(RED("%d "), node->data);
	in_order_node(node->rchild);
	return;
}

void in_order(Tree *tree) {
	if (tree == nullptr) {
		return;
	}
	printf("pre_order: ");
	in_order_node(tree->root);
	printf("\n");
}

void post_order_node(Node *node) {
	if (node == nullptr) {
		return ;
	}
	post_order_node(node->lchild);
	post_order_node(node->rchild);
	printf(YELLOW("%d "), node->data);
	return;
}

void post_order(Tree *tree) {
	if (tree == nullptr) {
		return;
	}
	printf("pre_order: ");
	post_order_node(tree->root);
	printf("\n");
}

void output_node(Node *node) {
	if (node == nullptr) {
		return ;
	}
	printf("%d", node->data);
	if (node->lchild == nullptr && node->rchild == nullptr) {
		return ;
	}
	printf("(");
	output_node(node->lchild);
	printf(", ");
	output_node(node->rchild);
	printf(")");
}

void output(Tree *tree) {
	if (tree == nullptr) {
		return;
	}
	printf(PURPLE("tree(%d) : "), tree->n);
	output_node(tree->root);
	printf("\n");
	return;
}


int main() {

	srand(time(NULL));
	Tree *tree = GetNewTree();
#define max_op 20
	for (int i = 0; i < max_op; i++) {
		int val = rand() % 100 + 1;
		insert(tree, val);
		output(tree);
	}
	pre_order(tree);
	in_order(tree);
	post_order(tree);

#undef max_op
	return 0;
}
