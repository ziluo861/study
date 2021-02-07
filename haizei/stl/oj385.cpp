/*************************************************************************
	> File Name: oj385.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 13 Nov 2020 07:51:52 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;

struct person {
	int t, c;
};

int n, con, mark[100005];

int main() {
	queue<person> que;	
	scanf("%d", &n);
	for (int i = 0 ; i < n; i++) {
		int atime, pcnt;
		scanf("%d%d", &atime, &pcnt);
		while (!que.empty() && atime - que.front().t >= 86400) {
			mark[que.front().c]--;
			if (mark[que.front().c] == 0) {
				con--;
			}
			que.pop();
		}
		for (int j = 0; j < pcnt; j++) {
			int temp;
			scanf("%d", &temp);
			que.push((person){atime, temp});
			mark[temp]++;
			if(mark[temp] == 1) {
				con++;
			}
		}
		printf("%d\n", con);
	}

	return 0;
}
