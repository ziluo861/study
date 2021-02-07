/*************************************************************************
	> File Name: oj117.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Oct 2020 10:52:13 AM CST
	读入一个不超过四位数的整数，判断它是不是回文数。

​ 回文数是指正着看和倒着看一样的数，比如 131、1221 就是回文数，而123不是。
 ************************************************************************/

#include<stdio.h>

int rev_num(int n) {
	if (__builtin_expect( !!(n < 0),0 )) return 0;
	int temp = 0, x = n;
	while (n) {
		temp = temp * 10 + n % 10;
		n /= 10;
	}
	return temp == x;
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%s\n",rev_num(n) ? "YES" : "NO");
}
