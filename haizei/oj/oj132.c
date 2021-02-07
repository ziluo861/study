/*************************************************************************
	> File Name: oj132.c
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Oct 2020 04:03:39 PM CST
	 给出 n 个数字，求这 n 个数字的乘积。
 ************************************************************************/

#include<stdio.h>
typedef long long ll;
int main() {
	int n;
	scanf("%d", &n);
	ll cnt = 1;
	for (int i = 0; i < n ; i++) {
		int x;
		scanf("%d", &x);
		cnt *= x;
	}
	printf("%lld\n", cnt);
}
