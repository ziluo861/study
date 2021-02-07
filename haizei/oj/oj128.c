/*************************************************************************
	> File Name: oj128.c
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Oct 2020 03:32:53 PM CST
	读入 n 个整数，计算它们的平均值。
 ************************************************************************/

#include<stdio.h>

int main() {
	int n;
	double cnt = 0;
	scanf("%d\n", &n);
	for (int i = 0; i < n ; i++) {
		double x;
		scanf("%lf", &x);
		cnt += x; 
	}
	printf("%.2lf\n", cnt / n );
}
