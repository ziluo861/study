/*************************************************************************
	> File Name: pro14.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Oct 2020 08:07:06 PM CST
	斐波那契数列(递归法)
	斐波那契数列(记忆数组法)
 ************************************************************************/

#include<iostream>
using namespace std;

long long f1(int n) {
	if (n == 1 || n == 2) return 1;
	return f1(n - 1) + f1(n - 2);
}

long long num[50];

long long f2(int n) {
	if (n == 1 || n == 2) return 1;
	if (num[n]) return num[n];
	return num[n] = f2(n - 1) + f2(n - 2);
}
int main() {
	for(int i = 1; i <= 40; i++) {
		cout << i << " : " << f2(i) << endl;
	}
	return 0;
}
