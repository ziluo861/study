/*************************************************************************
	> File Name: oj111.c
	> Author: 
	> Mail: 
	> Created Time: Mon 26 Oct 2020 07:55:09 PM CST
	小明要乘出租车去奶奶家。出租车计价方案为：3 公里内（含）的起步价是 13 元，超过 3 公里之后按 2.3 元 / 公里，另外在整个乘车途中另加 1 元燃油附加费。已知小明到奶奶家的路程为 N 公里，请计算出租车费用是多少元。
 ************************************************************************/

#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	(n <= 3) ? printf("14\n") : printf("%.1lf\n", 14 + (n - 3) * 2.3);
	return 0;
}