/*************************************************************************
	> File Name: oj120.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Oct 2020 04:01:57 PM CST
	 输入一个日期，判断这个日期是否存在。

1,3,5,7,8,10,12 月有 31 天；
4,6,9,11 月有 30 天；
非闰年的 2 月有 28 天；
闰年的 2 月有 29 天；
非整百年，能被 4 整除的为闰年，整百年，能被400整除的是闰年。
 ************************************************************************/

#include<stdio.h>
int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31}; 

int check(int y, int m, int d) {
	if (m <= 0 || m > 12 || d <= 0) return 0;
	if ( (y % 4 == 0 && y % 100 != 0) || y % 400 == 0 ) arr[2] += 1;
	return d <= arr[m];
}

int main() {
	int y, m, d;
	scanf("%d %d %d", &y, &m, &d);
	printf("%s\n", check(y, m, d) ? "YES" : "NO");
	return 0;
}

