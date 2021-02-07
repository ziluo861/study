/*************************************************************************
	> File Name: oj380.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 03 Nov 2020 09:00:09 AM CST
 ************************************************************************/

#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

struct node {
	int num;
	string s;
};

int n;

node p[105];

bool cmp(node a, node b) {

	if (a.s.size() == b.s.size()) return a.s > b.s; //如果长度相同，按照字典序进行排序

	return a.s.size() > b.s.size(); //长度不同，谁长谁就最大
}

int main() {
	cin >> n;
	for (int i = 1; i <=n; i++) {
		cin >> p[i].s;
		p[i].num = i;
	}
	sort(p + 1, p + n + 1, cmp);
	cout << p[1].num << endl << p[1].s << endl;
	return 0;
}
