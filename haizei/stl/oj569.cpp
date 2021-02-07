/*************************************************************************
	> File Name: oj569.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 13 Nov 2020 08:11:14 PM CST
 ************************************************************************/

#include <stack>
#include <iostream>
#include <cstdio>
using namespace std;

struct node {
	double s, ws;
};

int main() {
	double ws0, c0, s0;
	cin >> ws0 >> c0;
	s0 = ws0 * c0 / 100;
	int n;
	cin >> n;
	stack<node> sta;
	for (int i = 0; i < n; i++) {
		char t;
		cin >> t;
		if (t == 'p') {
			double wst, ct, st;
			cin >> wst >> ct;
			st = wst * ct / 100;
			ws0 += wst;
			s0 += st;
			sta.push((node){st, wst});
		} else {
			if (!sta.empty()) {
				ws0 -= sta.top().ws;
				s0 -= sta.top().s;
				sta.pop();
			}
		}
		printf("%d %.5f\n", (int)ws0, s0 / ws0 * 100);
	}
	return 0;
}
