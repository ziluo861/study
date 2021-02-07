/*************************************************************************
	> File Name: oj90.c
	> Author: 
	> Mail: 
	> Created Time: Mon 26 Oct 2020 02:02:14 PM CST
	给定一个三位数的整数，分别输出它的百位数、十位数和个位数。
 ************************************************************************/

#include<stdio.h>

int main() {
	int a, temp = 0;
	scanf("%d", &a);
	while (a) {
		temp = temp * 10 + a % 10;
		a /= 10;
	}
	do {
		printf("%d\n", temp % 10);
		temp /= 10;
	} while (temp);
	return 0;
}
