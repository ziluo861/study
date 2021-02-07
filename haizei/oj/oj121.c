/*************************************************************************
	> File Name: oj121.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Oct 2020 04:08:23 PM CST
	输入两个字符 a,b 分别表示小明和李华所出手势。′′O′′,′′Y′′,′′H′′ 分别表示石头剪刀布。
 ************************************************************************/

#include<stdio.h>

int main() {
	char a, b;
	scanf("%c %c", &a, &b);
	if ( (a == 'O' && b == 'Y') || (a == 'Y' && b == 'H') || (a == 'H' && b == 'O')) printf("MING\n");
	else if ( (a == 'O' && b == 'O') || (a == 'Y' && b == 'Y') || (a == 'H' && b == 'H')) printf("TIE\n");
	else printf("LI\n");
	return 0;
}
