/*************************************************************************
	> File Name: oj93.c
	> Author: 
	> Mail: 
	> Created Time: Mon 26 Oct 2020 02:13:14 PM CST
	读入一个实数表示的摄氏温度 C，将它转换为华氏温度 F 并输出。公式如下：
F=1.8∗C+32
 ************************************************************************/

#include<stdio.h>

int main() {
	double c;
	scanf("%lf", &c);
	printf("%.2lf\n", 1.8 * c + 32);

	return 0;
}
