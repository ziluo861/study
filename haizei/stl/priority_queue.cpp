/*************************************************************************
	> File Name: priority_queue.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 25 Nov 2020 07:21:31 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

struct node {
	int x, y;
	double z;
	bool operator< (const node &b) const {
		return this->x < b.x;
	}
};

int main() {
	priority_queue<node> que;
	que.push((node){1, 2, 1.4});
	que.push((node){2, 1, 4.1});
	cout << que.top().x << endl;
	que.pop();
	cout << que.top().x << endl;
   /* priority_queue<int> que;*/
	//que.push(10);
	//que.push(20);
	//que.push(5);
	//que.push(6);
	//que.push(1);
	//while(!que.empty()) {
	//    cout << que.top() << endl;
	//    que.pop();
	/*}*/

	return 0;
}
