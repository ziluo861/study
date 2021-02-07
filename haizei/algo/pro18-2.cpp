/*************************************************************************
	> File Name: pro18.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 30 Oct 2020 07:30:16 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;
//自顶向下
int num[20][20], dp[20][20], n;


int main() {
	n = 15;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> num[i][j];
		}
	}
	for (int i = n; i > 0; i--) {
		for(int j = 1; j <= i; j++) {
			dp[i][j] = max( dp[i + 1][j] , dp[i + 1][j + 1] ) + num[i][j];
		}
	}
	cout << dp[1][1] << endl;
	return 0;
}
