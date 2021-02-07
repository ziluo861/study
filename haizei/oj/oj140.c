/*************************************************************************
	> File Name: oj140.c
	> Author: 
	> Mail: 
	> Created Time: Thu 29 Oct 2020 03:23:00 PM CST
	输入一个正整数 n，并输出一个菱形，这个菱形有 2n−1 行，第一行有 1 个字母 A，之后的 n−1 行每行字母会变成上一行的下一个（A 的下一个是 B），且数量会递增 2 个，后面的 n+1 行至 2n−1 行，会变成上一行的上一个（B 的上一个是 A），且数量会递减 2 个，同时，我们需要在每行前输出一定数量的空格，以保证菱形居中，注意末尾不要有多余的输出。
 ************************************************************************/

#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	char ch = 'A';
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (int j = 1; j < 2 * i; j++) {
			printf("%c", ch);
		}
		ch++;
		printf("\n");
	}
		ch--;
	for (int i = n - 1; i > 0; i--) {
		ch--;
		for (int j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (int j = 1; j < 2 * i; j++) {
			printf("%c", ch);
		}
		printf("\n");
	}
	return 0;
}
