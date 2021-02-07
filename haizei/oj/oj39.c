/*************************************************************************
	> File Name: oj39.c
	> Author: 
	> Mail: 
	> Created Time: Mon 26 Oct 2020 11:10:31 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
	int begin, n, cnt = 0;
	scanf("%d%d",&begin, &n);
	if (begin < 0) begin = 0;
	while (cnt != n) {
		if (begin % 2 == 0) {
			printf("%d\n",begin);
			cnt++;
			begin += 2;
		}
		else begin = begin + 1;
	}
	return 0;
}
