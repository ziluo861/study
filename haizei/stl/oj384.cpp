/*************************************************************************
	> File Name: oj384.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 13 Nov 2020 07:33:04 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, x, t;
	cin >> n >> x >> t;
	queue<int> que;
	for (int i = 1; i <= n; i++) {
		que.push(i);
	}
	for (int i = 1; i < x; i++) {
		que.push(que.front());
		que.pop();
	}
	while (que.size() != 1) {
		if (t % 7 == 0) {
			que.pop();
		} else {
			que.push(que.front());
			que.pop();
		}
		t++;
	}
	cout << que.front() << endl;
	return 0;
}
