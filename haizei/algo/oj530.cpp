/*************************************************************************
	> File Name: oj530.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 28 Nov 2020 02:40:34 PM CST
 ************************************************************************/

#include <queue>
#include <iostream>
#include <string>
using namespace std;

struct node {
	int x, y;
};

int n, m, cnt;
int dir[4][2] = {-1, 0, 1, 0, 0, -1, 0, 1};
char mmap[55][55];

int main() {
	queue<node> que;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> mmap[i][j];
			if (mmap[i][j] == '*') {
				que.push((node){i, j});
				mmap[i][j] = '.';
			}
		}
	}
	
	cin >> cnt;
	while(cnt--) {
		string str;
		cin >> str;
		int dir_num, check[55][55] = {0}, qsize = que.size();
		if (str == "NORTH") {
			dir_num = 0;
		} else if (str == "SOUTH") {
			dir_num = 1;
		} else if (str == "WEST") {
			dir_num = 2;
		} else {
			dir_num = 3;
		}
		while(qsize--) {
			node temp = que.front();
			que.pop();
			for (int i = 1; 1; i++) {
				int x = temp.x + dir[dir_num][0] * i;
				int y = temp.y + dir[dir_num][1] * i;
				if (mmap[x][y] != '.') {
					break;
				}
				if (check[x][y] == 0) {
					que.push((node){x, y});
					check[x][y] = 1;
				}
			}
		}

	}

	while(!que.empty()) {
		node temp = que.front();
		que.pop();
		mmap[temp.x][temp.y] = '*';
	}

	for (int i = 1; i <= n; i++) {
		cout << &mmap[i][1] << endl;
	}

	return 0;
}
