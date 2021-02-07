/*************************************************************************
	> File Name: oj402.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 28 Nov 2020 02:22:25 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

struct node {
	int now, step;
};

int n, a, b, arr[205], check[205];

int main() {
	cin >> n >> a >> b;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	
	queue<node> que;
	que.push((node){a, 0});
	check[a] = 1;
	while(!que.empty()) {
		node temp = que.front();
		que.pop();
		int up = temp.now + arr[temp.now];
		int down = temp.now - arr[temp.now];
		if (up == b || down == b) {
			cout << temp.step + 1 << endl;
			return 0;
		}
		if (up <= n && check[up] == 0) {
			que.push((node){up, temp.step + 1});
			check[up] = 1;
		}
		if (down >= 1 && check[down] == 0) {
			que.push((node){down, temp.step + 1});
			check[down] = 1;
		}
	}
	cout << -1 << endl;
	return 0;
}
