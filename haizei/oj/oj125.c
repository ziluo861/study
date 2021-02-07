/*************************************************************************
	> File Name: oj125.c
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Oct 2020 02:27:04 PM CST
	已知一场考试的开始时间和持续时间，计算并输出考试的结束时间。注意，考试有可能跨两天。开始时间是 24 小时制。
 ************************************************************************/

#include<stdio.h>

int main() {
	int h, m, s, t;
	scanf("%d%d%d%d", &h, &m, &s, &t);
	int h1 = t / 3600;
	int m1 = (t / 60) % 60;
	int s1 = t % 60;
	h =(h + h1) % 24 , m += m1, s += s1;
	if (h == 0) printf("12:%d:%dam\n", m, s);
	else if (h > 0 && h < 12) {
		if (s >= 60) s %= 60, m += 1;
		if (m >= 60) m %= 60, h += 1;
		if ( h < 12) printf("%d:%d:%dam\n", h, m, s);
	}
	else if (h == 12) printf("12:%d:%dpm\n", m, s);
	else if (h >=13 && h <= 23) {
		if (s >= 60) s %= 60, m += 1;
		if (m >= 60) m %= 60, h += 1;
		if (h <= 23) printf("%d:%d:%dpm\n", h - 12, m, s);
	}
	printf("%.2lf%%\n", (t / 86400.0) * 100.0 );
	return 0;
}
