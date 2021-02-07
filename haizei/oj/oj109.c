/*************************************************************************
	> File Name: oj109.c
	> Author: 
	> Mail: 
	> Created Time: Mon 26 Oct 2020 07:40:55 PM CST
	输入一个四位的正整数，判断它的各个位上是否存在偶数。
 ************************************************************************/

#include<stdio.h>

int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	while (n) {
		cnt++;
		int temp = n % 10;
		if (temp % 2 == 0) {
			printf("YES\n");
			break;
		}
		if (cnt == 4) printf("NO\n");
		n /= 10;
	}
	return 0;
}
