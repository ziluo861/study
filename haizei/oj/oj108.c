/*************************************************************************
	> File Name: oj108.c
	> Author: 
	> Mail: 
	> Created Time: Mon 26 Oct 2020 07:37:33 PM CST
	给定一个三角形或长方形的底和高（长和宽），求它的面积。
 ************************************************************************/

#include<stdio.h>

int main() {
	char str;
	scanf("%c", &str);
	double m, n;
	scanf("%lf%lf", &m, &n);
	if (str == 'r') printf("%.2f\n", m * n);
	else printf("%.2f\n", m * n / 2);
	return 0;
}
