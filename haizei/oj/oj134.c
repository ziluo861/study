/*************************************************************************
	> File Name: oj134.c
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Oct 2020 04:17:33 PM CST
	给定两个数字 a,b，按照从小到大的顺序输出这两个数字之间（含）所有 11 的倍数。
 ************************************************************************/

#include<stdio.h>
#define swap(a, b) { \
	__typeof(a) __temp = a; \
	a = b; \
	b = __temp; \
}
int main() {
	int a, b, cnt = 0, sum = 0;
	scanf("%d%d", &a, &b);
	if (a > b) swap(a, b);
	for (int i = a; i <= b; i++) {
		if (i % 11 == 0) cnt++; 
	}
	for (int i = a; i <= b ; i++) {
		if (i % 11 == 0 && sum == cnt - 1) ++sum, printf("%d",i);
		else if (i % 11 == 0) ++sum, printf("%d ", i);
	}
	printf("\n");
	return 0;
}
