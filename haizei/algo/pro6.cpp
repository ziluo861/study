/*************************************************************************
	> File Name: pro6.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Oct 2020 06:55:26 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
	int ans = 0, cnt = 0;
	for(int i = 1; i<= 100; i++) {
		ans += i * i;
	}
	cnt = (1 + 100) * 100 /2;
	cout << cnt * cnt - ans << endl;
	return 0;
}
