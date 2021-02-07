/*************************************************************************
	> File Name: oj401.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 18 Nov 2020 06:56:46 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

struct node {
	int x, y, step;
};

int n, sx, sy;
int num[505][505];
int dir[12][2] = {1, 2, 1, -2, -1, 2, -1, -2, 2, 1, 2, -1, -2, -1, -2, 1 ,2, 2, 2, -2, -2, 2, -2, -2};
int main() {
	memset(num, -1, sizeof(num));
	queue<node> que;
	que.push(node{1, 1, 0});
	num[1][1] = 0;
	while(!que.empty()) {
		node temp = que.front();
		que.pop();
		for (int i = 0; i < 12; i++) {
			int xx = dir[i][0] + temp.x;
			int yy = dir[i][1] + temp.y;
			if (xx < 1 || yy < 1 || xx > 500 || yy > 500 || num[xx][yy] != -1) {
				continue;
			}
			num[xx][yy] = temp.step + 1;
			que.push((node){xx, yy, num[xx][yy]});
		}
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		cout << num[a][b] << endl;
	}

	return 0;
}
