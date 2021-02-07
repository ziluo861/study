/*************************************************************************
	> File Name: oj137.c
	> Author: 
	> Mail: 
	> Created Time: Thu 29 Oct 2020 02:35:26 PM CST
	​ 参照样例按要求输出字母三角形。
 ************************************************************************/

#include<stdio.h>
 
int main() {
	int n;
	char ch = 'A';
	scanf("%d", &n);
	for(int i = 0 ;i < n ; i++) {
		for (int j = n - i; j > 0; j--) {
			printf("%c", ch);
			ch++;
		}
		printf("\n");
	}
	return 0;
}
