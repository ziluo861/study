/*************************************************************************
	> File Name: oj103.c
	> Author: 
	> Mail: 
	> Created Time: Mon 26 Oct 2020 07:18:51 PM CST
	<BS> 判断一个整数 a 能否被另一个整数 b 整除。
 ************************************************************************/

#include<stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	(a % b) ? printf("NO\n") : printf("YES\n");
}
