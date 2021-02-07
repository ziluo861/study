/*************************************************************************
	> File Name: pro1.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Oct 2020 06:22:05 PM CST
	If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
   /* int i = 1, sum = 0;*/
	//for (; i < 1000; i++) {
	//    if (i % 3 == 0 || i % 5 == 0) sum += i;
   /* }*/
	int t3 = (3 + 999) * 333 / 2;
	int t5 = (5 + 995) * 199 / 2;
	int t15 = (15 + 990) * 66 / 2;
	cout << t3 + t5 - t15 << endl;
}
