/*************************************************************************
	> File Name: pro15.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 30 Oct 2020 06:57:27 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;


int main() {
	long long ans = 1;
	for (int i = 40, j = 1; i > 20; i--, j++) {
		ans *= i;
		ans /= j;
	}
	cout << ans << endl;
    return 0;
}
