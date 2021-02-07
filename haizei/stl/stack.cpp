/*************************************************************************
	> File Name: stack.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 13 Nov 2020 03:09:14 PM CST
 ************************************************************************/

#include <iostream>
#include <stack>
using namespace std;

struct node {
	int x, y;
};

int main() {
	stack<int> sta;
	for (int i = 9; i > 4; i--) {
		sta.push(i);
	}
	while (!sta.empty()) {
		cout << " sta.top() = " << sta.top() << " sta.size() " << sta.size() << endl;
		sta.pop();
	}

	stack<node> staa;
	node a;
	a.x = 5;
	a.y = 6;
	staa.push(a);
	staa.push((node){7, 8});
	cout << staa.top().x << endl;
	staa.pop();
	node temp = staa.top();
	cout << temp.x << " " << temp.y << endl;
	return 0;
}
