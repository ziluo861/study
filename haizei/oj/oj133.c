/*************************************************************************
	> File Name: oj133.c
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Oct 2020 04:06:40 PM CST
	通过使用两层循环，我们就可以输出一个 n∗n 乘法表。
 ************************************************************************/

#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		for(int j = i; j <= n; j++) {
			if (j<n) printf("%d*%d=%d\t", i , j, i * j);
			else printf("%d*%d=%d\n", i, j, i * j);
		}
	}
	return 0;
}
