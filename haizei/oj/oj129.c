/*************************************************************************
	> File Name: oj129.c
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Oct 2020 03:40:45 PM CST
	读入 n 个整数，找出其中最小的数。
 ************************************************************************/

#include<stdio.h>
#define MIN(a, b) ({ \
	__typeof(a) _a = (a); \
	__typeof(b) _b = (b); \
	(a) < (b) ? (a) : (b); \
})

int main() {
	int n, num = 10001;
	scanf("%d", &n);
	for (int i = 0; i < n ; i++) {
		int x;
		scanf("%d", &x);
		num = MIN(num, x);
	}
	printf("%d\n", num);
	return 0;
}
