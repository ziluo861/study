/*************************************************************************
	> File Name: queue.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 13 Nov 2020 03:00:21 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

struct node {
	int x, y;
};

int main() {
	queue<int> que;
	for (int i = 9; i > 4; i--) {
		que.push(i);
	}
	while (!(que.empty())) {
		cout << " que.front() = " << que.front() << " que.size() = " << que.size() <<endl;
		que.pop();
	}
	
	queue<node> quee;
	node a;
	a.x = 5;
	a.y = 6;
	quee.push(a);
	quee.push((node){7, 8});
	cout << quee.front().x << endl;
	quee.pop();
	node temp = quee.front();
	cout << temp.x << " " << temp.y << endl;
	return 0;
}
