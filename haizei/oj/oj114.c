/*************************************************************************
	> File Name: oj114.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Oct 2020 10:01:22 AM CST
	输入一个字母 x，输出字母对应的名字。
 ************************************************************************/

#include<stdio.h>

int main() {
	char x;
	scanf("%c", &x);
	if (x == 'h') printf("He\n");
	else if (x == 'l') printf("Li\n");
	else if (x == 'c') printf("Cao\n");
	else if (x == 'd') printf("Duan\n");
	else if (x == 'w') printf("Wang\n");
	else printf("Not Here\n");
	return 0;
}
