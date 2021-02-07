/*************************************************************************
	> File Name: oj600.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 04 Nov 2020 08:43:18 PM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int n, m, t, num[3005][3005];
int main() {
	scanf("%d%d%d", &n, &m, &t);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &num[i][j]);
		}
	}
	int x = n, y = 1;
	while (1) {
		if (num[x][y] == t) {
			printf("%d %d\n", x, y);
			return 0;
		}
		if (num[x][y] > t) {
			x--;
		}else{
			y++;
		}
	}
	return 0;
}
