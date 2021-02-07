/*************************************************************************
	> File Name: oj123.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Oct 2020 04:49:20 PM CST
	 给定一个数轴上的两条线段，判断两条线段是否存在完全覆盖关系。
 ************************************************************************/

#include<stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if ( (a <= c && b >= d) || (c <= a && d >= b) ) printf("YES\n");
	else printf("NO\n");
	return 0;
}
