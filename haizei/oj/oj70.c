/*************************************************************************
	> File Name: oj70.c
	> Author: 
	> Mail: 
	> Created Time: Mon 26 Oct 2020 11:38:21 AM CST
	所谓丑数，就是素因子中只含有 2、3、5 的数字。给出一个数字 N，请输出 N 以内所有丑数。特别的规定，1 是第一个丑数。
 ************************************************************************/

#include<stdio.h>

int ugly(int n) {
	while( n % 2 ==0) n /= 2;
	while ( n % 3 ==0) n /= 3;
	while ( n % 5 ==0) n /= 5;
	return n == 1;
}

int main() {
	int n;
	scanf("%d",&n);
	printf("1\n");
	for (int i = 2; i <= n ; i++) {
		if (ugly(i)) printf("%d\n", i);
	}
	return 0;
}
