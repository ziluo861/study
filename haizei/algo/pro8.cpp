/*************************************************************************
	> File Name: pro8.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Oct 2020 07:17:57 PM CST
 ************************************************************************/

#include <iostream>
#include <string.h>
using namespace std;
long long cnt, zero_cnt, raw = 1;
char num[1005];

int main() {
	cin >> num;
	for(int i = 0; i < 1000; i++) {
		if (i < 13) raw *= (num[i] - '0');
		else {
			if (num[i] == '0') zero_cnt++;
			else raw *= (num[i] - '0');
			if (num[i - 13] == '0') zero_cnt--;
			else raw /= (num[i - 13] -'0');
		}
	if (zero_cnt == 0) cnt = max(cnt, raw);
	}
	cout << cnt <<endl;
	return 0;
}
