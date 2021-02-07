/*************************************************************************
	> File Name: oj387.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 03 Nov 2020 10:29:38 AM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

struct node {
	int cnt,num;
};

int n, m;

node wm[100005];

bool cmp(const node &a, const node &b) {
	return a.num < b.num;
}

int main() {
	cin >>n >> m;
	for (int i = 0; i < n; i++) {
		cin >> wm[i].num;
		wm[i].cnt = i + 1;
	}
	//若所有瓜堆的数量均小于需要数量，则输出 0。
	//下面两行解决此问题，有两种方法，1 特判 2 建造虚拟瓜堆
	wm[n].cnt = 0;
	wm[n].num = 2100000000;
	sort(wm, wm + n + 1, cmp);
	for (int i = 0; i < m; i++) {
		int t, l = 0, r = n;
		cin >> t;
		while (l != r) {
			int mid = (l + r) / 2;
			if (wm[mid].num >= t) r = mid;
			else l = mid + 1;
		}
		cout << wm[l].cnt << endl;
	}
	return 0;
}
