/*************************************************************************
	> File Name: oj383.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 13 Nov 2020 06:07:22 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

int x, y, n;

int main() {
	cin >> x >> y >> n;
	queue<int> quex;
	queue<int> quey;
	for (int i = 1; i <= x; i++) {
		quex.push(i);
	}
	for (int i = 1; i <= y; i++) {
		quey.push(i);
	}

	for (int i = 1; i <= n; i++) {
		cout << quex.front() << " " << quey.front() << endl;
		quex.push(quex.front());
		quey.push(quey.front());
		quex.pop();
		quey.pop();
	}
	return 0;
}
