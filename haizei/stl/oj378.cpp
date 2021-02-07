/*************************************************************************
	> File Name: oj378.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 13 Nov 2020 06:15:23 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

	string str;
	cin >> str;

	stack<char> sta;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
			sta.push(str[i]);
		} else if (str[i] == ')') {
			if (sta.empty() || sta.top() != '(') {
				cout << "NO" << endl;
				return 0;
			}
			sta.pop();
		} else if (str[i] == ']') {
			if (sta.empty() || sta.top() != '[') {
				cout << "NO" << endl;
				return 0;
			}
			sta.pop();
		} else if (str[i] == '}') {
			if (sta.empty() || sta.top() != '{') {
				cout << "NO" << endl;
				return 0;
			}
			sta.pop();
		}
	}

	if (sta.empty()) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;

}
