/*************************************************************************
	> File Name: oj131.c
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Oct 2020 03:53:52 PM CST
	极差是指一组数据中，最大值与最小值之差。
 ************************************************************************/

#include<stdio.h>

#define MAX(a,b) ({ \
	__typeof(a) _a = (a); \
	__typeof(b) _b = (b); \
	(_a) > (_b) ? (_a) : (_b); \
})

#define MIN(a,b) ({ \
	__typeof(a) _a = (a); \
	__typeof(b) _b = (b); \
	(_a) < (_b) ? (_a) : (_b); \
})


int main() {
	int n;
	scanf("%d", &n);
	int max = 0, min = 10001;
	for(int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		max = MAX(max, x);
		min = MIN(min, x);
	}
	printf("%d\n", max - min);
	return 0;
}
