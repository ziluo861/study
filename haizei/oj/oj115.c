/*************************************************************************
	> File Name: oj115.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Oct 2020 10:08:58 AM CST
	某种彩票的获奖号码由两位非零数组成，获奖规则如下：

​ 如果用户的号码和中奖号码完全相同，奖金为100元；

​ 如果用户的号码能匹配中奖号码的所有数字，奖金为20元；

​ 如果用户的号码能匹配中奖号码的一个数字，奖金为2元。
 ************************************************************************/

#include<stdio.h>
int main() {
	int x, y, z, temp = 0;
	scanf("%d%d",&x, &y);
	z = y;
	while (z) {
	temp = temp * 10 + z % 10;
	z /= 10;
	}
	int x1 = x / 10, x2 = x % 10, y1 = y / 10, y2 = y % 10;
	if (x == y) printf("100\n");
	else if (x == temp) printf("20\n");
	else if (x1 == y1 || x1 == y2 || x2 == y1 || x2 == y2) printf("2\n");
	else printf("0\n");
	return 0;
}
