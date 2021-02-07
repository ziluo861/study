/*************************************************************************
	> File Name: oj94.c
	> Author: 
	> Mail: 
	> Created Time: Mon 26 Oct 2020 02:17:05 PM CST
	读入两个实数表示体重 w 和身高 h，输出 BMI 的值。​ 公式如下：​
BMI=w/(h∗h)
 ************************************************************************/

#include<stdio.h>

int main() {
	double w, h;
	scanf("%lf%lf", &w, &h);
	printf("%.2f\n", w / (h * h));
}
