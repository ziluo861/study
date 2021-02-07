/*************************************************************************
	> File Name: oj101.c
	> Author: 
	> Mail: 
	> Created Time: Mon 26 Oct 2020 07:09:16 PM CST
	 输入一个不超过 10000 的整数 n，计算它每一位上的数字总和。
 ************************************************************************/

#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int sum = 0;
	while (n) {
		int temp = n % 10;
		sum += temp;
		n /= 10;
	}
	printf("%d\n", sum);
}
