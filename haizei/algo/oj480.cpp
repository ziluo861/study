/*************************************************************************
	> File Name: oj480.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 08 Nov 2020 03:01:10 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct node {
	char s[4];
	int num1, num2, falg;
};

node b[15];

int main() {
	for (int i = 0; cin >> b[i].s; i++) {
		if (b[i].s[0] == '/') {
			b[i].num1 = b[i].num2 = 10;
			b[i].falg = 2;
		}else if (b[i].s[1] == '/') {
			b[i].num1 = b[i].s[0] - '0';
			b[i].num2 = 10;
			b[i].falg = 1;
		}else{
			b[i].num1 = b[i].s[0] - '0';
			b[i].num2 = b[i].s[1] - '0' + b[i].num1;
			b[i].falg = 0;
		}
	}
	int ans = 0;
	for (int i = 0; i < 10; i++) {
		ans += b[i].num2;
		if (b[i].falg == 1) {
			ans += b[i + 1].num1;
		}else if (b[i].falg == 2) {
			if (b[i + 1].falg == 2) {
				ans += 10 + b[i + 2].num1; 
			}else{
				ans += b[i + 1].num2;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
