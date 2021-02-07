/*************************************************************************
	> File Name: oj390.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 03 Nov 2020 10:53:24 AM CST
 ************************************************************************/

//二分答案
#include <iostream>
using namespace std;

int n, m, num[100005], lr;

int func(int mid) {//求切割的段数
	int t = 0;
	for (int i = 0; i <= n; i++) {
		t += num[i] / mid;
	}
	return t;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n;i++) {
		cin >> num[i];
		lr = max(lr, num[i]);
	}
	int l = 1, r = lr; //最少可以切一段，最大可切最大值的段数
	while (l != r) {
		int mid = (l + r + 1) / 2;
		int s = func(mid);
		if (s >= m) l = mid;
		else r = mid - 1;
	}
	cout << r << endl;
	return 0;
}
