/*************************************************************************
	> File Name: oj97.c
	> Author: 
	> Mail: 
	> Created Time: Mon 26 Oct 2020 06:37:47 PM CST
	输入一个正整数 n，你需要计算 1+2+……+n 的值。​ 公式如下：​
sum=n∗(1+n)/2
 ************************************************************************/

#include<stdio.h>
typedef long long ll;
int main() {
	ll n;
	scanf("%lld", &n);
	printf("%lld\n", n * (n + 1) / 2);

	return 0;
}
