/*************************************************************************
	> File Name: oj138.c
	> Author: 
	> Mail: 
	> Created Time: Thu 29 Oct 2020 02:45:25 PM CST
	​ 输入一个正整数 n，并输出一个三角形，这个三角形有 n 行，第一行有 2n 个字母 A，之后每行字母 A 的数量会递减 2 个。
 ************************************************************************/

#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	char ch = 'A';
	for(int i = 0; i < n; i++) {
		for (int j = 2 * n - 2 * i; j > 0; j--) {
			printf("%c", ch);
		}
		printf("\n");
	}
	return 0;
}
