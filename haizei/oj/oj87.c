/*************************************************************************
	> File Name: oj87.c
	> Author: 
	> Mail: 
	> Created Time: Mon 26 Oct 2020 01:55:17 PM CST
	对于一个给定长和宽的矩形，输出它的周长和面积。
 ************************************************************************/

#include<stdio.h>

int main() {
	double a, b;
	scanf("%lf%lf", &a, &b);
	printf("%.2f\n", 2 * a + 2 * b);
	printf("%.2f\n", a * b);
}
