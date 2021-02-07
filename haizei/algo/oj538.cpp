/*************************************************************************
	> File Name: oj538.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 28 Nov 2020 02:11:56 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int n, arr[25][25], check[25];

void func(int now) {
	if (now != 1) {
		cout << "-";
	}
	cout << now;
	check[now] = 1;
	for (int i = 1; i <= n; i++) {
		if (check[i] == 0 && arr[now][i] == 1) {
			func(i);
		}
	}
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		if (check[i] == 0) {
			func(i);
		}
	}

	cout << endl;
	return 0;
}
