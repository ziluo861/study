/*************************************************************************
	> File Name: oj135.c
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Oct 2020 04:37:23 PM CST
	给定一个合法的日期，求 x 天后的日期。
 ************************************************************************/

#include<stdio.h>

int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
	int x;
	scanf("%d", &x);
	int y, m, d;
	scanf("%d%d%d", &y, &m, &d);
	if ( (y % 4 == 0 && y % 100 != 0) || y % 400 == 0 ) arr[2] = 29;
	for (int i = 0; i < x; i++) {
		++d;
		if (d > arr[m]) {
			++m;
			d = 1;
		}
		if (m > 12) {
			y++;
			m = 1;
	    if ( (y % 4 == 0 && y % 100 != 0) || y % 400 == 0 ) arr[2] = 29;
		else arr[2] = 28;
		}
    }
	printf("%d %d %d\n", y, m ,d);
	return 0;
}
