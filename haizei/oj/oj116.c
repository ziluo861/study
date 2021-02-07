/*************************************************************************
	> File Name: oj116.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Oct 2020 10:43:46 AM CST
	读入三角形的三条边，进行如下的判断：

​ 如果输入值不合法，输出 illegal triangle；

​ 如果输入值合法，两条较短边的平方和大于最长边的平方，则输出 acute triangle，表示锐角三角形；

​ 如果输入值合法，两条较短边的平方和等于最长边的平方，则输出 right triangle，表示直角三角形；

​ 如果输入值合法，两条较短边的平方和小于最长边的平方，则输出 obtuse triangle，表示钝角三角形。
 ************************************************************************/

#include<stdio.h>
#define swap(a, b) {\
 __typeof(a) __temp = a;\
	a = b;\
	b = __temp;\
}
int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b) swap(a, b);
	if (a > c) swap(a, c);
	if (b > c) swap(b, c);
	if (a + b < c) printf("illegal triangle\n");
	else if(a * a + b * b > c * c) printf("acute triangle\n");
	else if (a * a + b * b == c * c) printf("right triangle\n");
	else if (a * a + b * b < c * c) printf("obtuse triangle\n");
	return 0;
}
