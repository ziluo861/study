/*************************************************************************
	> File Name: pro13.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Oct 2020 08:41:31 PM CST
 ************************************************************************/

#include<iostream>
#include <string.h>
using namespace std;

int num1[105], num2[105], num3[105]; 
char s1[105], s2[105];
int main() {
	cin >> s1 >> s2;
	num1[0] = strlen(s1);
	num2[0] = strlen(s2);
	for (int i = 0, j = num1[0]; i < num1[0]; i++, j--) {
		num1[j] = s1[i] - '0';
	}
	for (int i = 0, j = num2[0]; i < num2[0]; i++, j--) {
		num2[j] = s2[i] - '0';
	}
	num3[0] = max(num1[0], num2[0]);
	for (int i= 1; i <= num3[0]; i++) {
		num3[i] = num1[i] + num2[i];
	}
	for (int i = 1; i <= num3[0]; i++) {
		if (num3[i] > 9) {
			num3[i + 1] += num3[i] / 10;
			num3[i] %= 10;
			if (i == num3[0]) num3[0]++; 
		}
	}
	for (int i= num3[0]; i > 0 ;i--) {
		cout << num3[i];
	}
	cout<<endl;
	return 0;
}
