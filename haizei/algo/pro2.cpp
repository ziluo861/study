/*************************************************************************
	> File Name: pro2.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Oct 2020 06:33:46 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
	int a = 1, b = 1, c = 2, cnt = 0;
	while (c <= 4000000) {
		if (c % 2 == 0) cnt += c;
		a = b;
		b = c;
		c = a + b;
	}
	cout << cnt <<endl;
	return 0;
}
