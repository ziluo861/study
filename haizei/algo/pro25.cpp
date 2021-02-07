/*************************************************************************
	> File Name: pro25.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 30 Oct 2020 06:07:19 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int func(int *n1, int *n2) {  //大整数加法  ,每次将n1加到n2中
	n2[0] = n1[0];//规定n1为长的那个
	for (int i = 1; i <= n2[0]; i++) {
		n2[i] += n1[i];
		if (n2[i] > 9) {
			n2[i + 1] += n2[i] / 10;
			n2[i] %= 10;
			if (i == n2[0]) n2[0]++;
		}
	}
	return n2[0] >= 1000;
}

int main() {
	int num[2][1100] = {{1, 1}, {1, 1}}; //第0位表示数的长度
	int a = 0 , b = 1; //表示前一项是第0项还是第1项，后一项是第0项还是第1项
	for (int i = 3; 1; i++) { // 循环加
		if (func(num[a], num[b]) == 1) {
			cout << i << endl;
			break;
		}
		swap(a, b); //保证n1最大
	}

	return 0;
}
