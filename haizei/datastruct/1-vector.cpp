/*************************************************************************
	> File Name: 1-vector.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 17 Nov 2020 02:05:35 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COLOR(a, b) "\033[" #b "m" a "\033[0m"
#define GREEN(a) COLOR(a, 32)

typedef struct Vector {
	int *data;
	int size;
	int length;
} Vec;

Vec *init(int n) {
	Vec *v = (Vec *)malloc(sizeof(Vec));
	v->data = (int *)malloc(sizeof(int) * n);
	v->size = n;
	v->length = 0;
	return v;
}

void clear(Vec *v) {
	if (v == nullptr) return;
	free(v->data);
	free(v);
	return;
}

int expand(Vec *v) {
	int extr_size = v->size;
	int *p;
	while(extr_size) {
		p = (int *)realloc(v->data, sizeof(int)*(v->size + extr_size));
		if (p) {
			break;
		}
	}
	if (extr_size == 0) {
		return 0;
	}
	v->data = p;
	v->size += extr_size;
	return 1;
}

int insert(Vec *v, int value, int loc) {
	if (v == nullptr) {
		return 0;
	}
	if (loc < 0 || loc > v->length) {
		return 0;
	}
	if (v->length == v->size) {
		if (!expand(v)) {
			return 0;
		}
		printf(GREEN("success to expand! the Vector size is %d\n"), v->size);
	}
	for (int i = v->length; i > loc; i--) {
		v->data[i] = v->data[i - 1];
	}
	v->data[loc] = value;
	v->length++;
	return 1;
}

int erase(Vec *v, int loc) {
	if (v == nullptr) {
		return 0;
	}
	if (loc < 0 || loc > v->length) {
		return 0;
	}
	for (int i = loc + 1; i < v->length; i++) {
		v->data[i - 1] = v->data[i];
	}
	v->length--;
	return 1;
}

void output(Vec *v) {
	if (v == nullptr) {
		return;
	}
	printf("Vector : [");
	for (int i = 0; i < v->length; i++) {
		i && printf(", ");
		printf("%d", v->data[i]);
	}
	printf("]\n");
	return ;
}

int main() {
	
	srand(time(NULL));
	#define max_op 20
	Vec *v = init(2);
	for (int i = 0; i < max_op; i++) {
		int val = rand() % 100;
		int ind = rand() % (v->length + 3) - 1;
		int op = rand() % 4;
		switch(op) {
			case 0 :
			case 1 :
			case 2 : {
						 printf("insert %d at %d to Vector = %d\n", val, ind, insert(v, val, ind));
					 } break;
			case 3 : {
						 printf("erase a iterm at %d from Vector = %d\n", ind, erase(v, ind));
					 } break;
		}
		output(v);
		printf("\n");

	}
	clear(v);
#undef max_op



	return 0;
}
