/*************************************************************************
	> File Name: euler.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 29 Oct 2020 10:00:18 AM CST
	连续13位数字最大乘积(滑动窗口)
 ************************************************************************/

#include<iostream>
using namespace std;
char str[1005];
long long cnt, zero_cnt,now = 1;

int main() {
	cin >> str;
	for (int i = 0; i < 1000; i++) {
		if (i < 13) now *= (str[i] - '0');
		else {
			if (str[i] == '0') zero_cnt++;
			else now *= (str[i] - '0');
			if (str[i - 13] == '0') zero_cnt--;
			else now /= (str[i - 13] - '0');
		}
		if (zero_cnt == 0) cnt = max(cnt, now);
	}
	cout << cnt << endl;
	return 0;
}
