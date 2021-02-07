/*************************************************************************
	> File Name: oj119.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Oct 2020 03:34:01 PM CST
	输入一个日期，计算这个日期前一天和后一天的日期。
 ************************************************************************/

#include<stdio.h>
int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 

void check(int y, int m, int d) {
	if ( (y % 4 ==0 && y % 100 != 0) || y % 400 == 0 ) arr[2] += 1;
	if (d - 1 < 0 && m - 1 == 0) {
		m = 12;
		printf("%d %d %d\n",y - 1, m , arr[m]);
	}
	else if (d - 1 < 0) printf("%d %d %d\n", y, m-1, arr[m-1]);
	else if (d + 1 > arr[m] && m + 1 > 12) {
		m = 1;
		d = 1; 
		printf("%d %d %d\n", y + 1, m, d);
	}
	else if (d + 1 > arr[m]) {
		m = m + 1;
		d = 1;
		printf("%d %d %d\n", y , m , d);
	}
	else printf("%d %d %d\n",y, m ,d);

	return;
}

int main() {
	int y, m ,d;
	scanf("%d%d%d", &y, &m, &d);
    check(y , m, d - 1);
	check(y , m, d + 1);
	return 0;
}
