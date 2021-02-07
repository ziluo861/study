/*************************************************************************
	> File Name: oj386.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 03 Nov 2020 09:54:32 AM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

struct node {
	int cnt; //瓜的编号
	int num; // 瓜的数量
};

int n, m;

node wm[100005];

bool cmp(const node &a, const node &b) {
	return a.num < b.num; //按照瓜的数量进行排序
}

int main() {
	cin >> n >> m;
	for (int i = 1 ;i <= n; i++) {
		cin >> wm[i].num;
		wm[i].cnt = i;
	}
	sort(wm + 1, wm + n + 1, cmp);
	for (int i = 1; i <= m; i++) {
		int t, flag = 0, l = 1, r = n ;
		cin >> t;
		while(l <= r) {
			int mid = (l + r) >> 1;
			if (t == wm[mid].num) {
				flag = wm[mid].cnt;
				break;
			}
			if (t < wm[mid].num) {
				r = mid - 1;
			}else{
				l = mid + 1;
			}
		}
		cout << flag << endl;
	}
	return 0;
}
