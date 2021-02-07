/*************************************************************************
	> File Name: oj590.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 30 Oct 2020 07:59:52 PM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int n, m, num[1005][1005], up[1005][1005], down[1005][1005], ans[1005][1005], mmax[1005][2];

int main() {
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n ; i++) {
		for (int j = 1; j <= i; j++) {
			scanf("%d", &num[i][j]);
		}
	}
	for (int i = 1; i <= n; i++) { //从上到下求
		for (int j = 1; j <= i; j++) {
			up[i][j] = max(up[i - 1][j - 1], up[i - 1][j]) + num[i][j];
		}
	}
	for (int i = n; i > 0; i--) {//从下到上求, down[1][1]即为最大值
		for (int j = 1; j <= i; j++) {
			down[i][j] = max(down[i + 1][j], down[i + 1][j + 1]) + num[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			ans[i][j] = up[i][j] + down[i][j] - num[i][j];
		} 
	}
	for (int i = 1; i <= n ;i++) {
		int m2 = 0, m1 = 0, cnt = 0;
		for (int j = 1; j <= i ; j++) {
			if (ans[i][j] > m1) {
				m2 = m1;
				m1 = ans[i][j];
				cnt = j;
			}
			else if (m2 < ans[i][j]) {
				m2 = ans[i][j];
			}
		}
		mmax[i][0] = cnt;//最大值的下标
		mmax[i][1] = m2;//次大值的值
	}
	for (int i = 1; i <= m; i++) {
		int a, b;
		scanf("%d%d", &a, &b);
		if (a == 1 && b == 1) printf("-1\n"); // 若删除点为最上面的点，直接结束
		else if (mmax[a][0] == b) printf("%d\n", mmax[a][1]); // 删除的为最大值，输出次大值
		else printf("%d\n", down[1][1]);//否则，输出最大值
	}
	return 0;
}
