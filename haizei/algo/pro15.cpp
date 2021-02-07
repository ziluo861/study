/*************************************************************************
	> File Name: pro15.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 30 Oct 2020 06:57:27 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;
int main() {
	long long dp[25][25] = {0};
	for (int i = 1; i <= 21; i++) {
		for (int j = 1; j <= 21; j++) {
			if (i == 1 && j == 1) {
				dp[i][j] = 1;
			}
			else{
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			}
		}
	}
	cout << dp[21][21] << endl;
	return 0;
}
