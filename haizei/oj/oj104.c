/*************************************************************************
	> File Name: oj104.c
	> Author: 
	> Mail: 
	> Created Time: Mon 26 Oct 2020 07:21:06 PM CST
	 输入一个三位数，判断组成它的各个位上是否存在数字9。
 ************************************************************************/

#include<stdio.h>

int main() {
	int a, cnt = 0;
	scanf("%d", &a);
	while (a) {
		cnt++;
		int temp = a % 10;
		if (temp == 9) {
			printf("YES\n");
			break;
		}
		if ( cnt == 3 ) printf("NO\n");
		a /= 10;
	}
	return 0;
}
