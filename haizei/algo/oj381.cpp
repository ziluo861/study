/*************************************************************************
	> File Name: oj381.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 03 Nov 2020 09:28:39 AM CST
 ************************************************************************/

#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int n, ans;

struct node {
	string name;
	int avg;
	int cla;
	char off;
	char west;
	int paper;
	int m;
	int num;
};

node p[105];

bool cmp(node a, node b) {
	if (a.m == b.m) return a.num < b.num;

	return a.m > b.m;
}

int func(int x) {
	int t = 0;
	if (p[x].avg > 80 && p[x].paper >= 1) t += 8000;
	if (p[x].avg > 85 && p[x].cla > 80) t += 4000;
	if (p[x].avg > 90 ) t += 2000;
	if (p[x].avg > 85 && p[x].west == 'Y') t += 1000;
	if (p[x].cla > 80 && p[x].off == 'Y') t += 850;
	return t;
}

int main() {
	cin >> n;
	for (int i = 1; i <= n ;i++) {
		cin >> p[i].name >> p[i].avg >> p[i].cla >> p[i].off >> p[i].west >> p[i].paper;
		p[i].num = i;
		p[i].m = func(i);
		ans += p[i].m;
	}
	sort(p + 1, p + n + 1, cmp);
	cout << p[1].name << endl << p[1].m << endl << ans << endl;
	return 0;
}
