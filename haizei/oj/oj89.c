/*************************************************************************
	> File Name: oj89.c
	> Author: 
	> Mail: 
	> Created Time: Mon 26 Oct 2020 01:59:59 PM CST
	给定一个两位数的整数，分别输出它的十位数和个位数。
 ************************************************************************/

#include<stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	printf("%d\n", a / 10);
	printf("%d\n", a % 10);
}