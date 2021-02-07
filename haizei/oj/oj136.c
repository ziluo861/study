/*************************************************************************
	> File Name: oj136.c
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Oct 2020 05:53:41 PM CST
	给定一个正整数 n，输出 n 以内（含）所有 7 的倍数。
 ************************************************************************/

#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		if (i % 7 == 0) printf("%d\n", i);
	}
	return 0;
}
