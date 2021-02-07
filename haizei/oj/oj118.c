/*************************************************************************
	> File Name: oj118.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Oct 2020 11:00:57 AM CST
	已知 1900 年是鼠年，输入一个年份，输出其对应生肖。

 鼠 rat 牛 ox 虎 tiger 兔 rabbit 龙 dragon 蛇 snake

 马 horse 羊 sheep 猴 monkey 鸡 rooster 狗 dog 猪 pig
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
char arr[12][100]={"rat","ox","tiger","rabbit","dragon","snake","horse","sheep","monkey","rooster","dog","pig"};
int main() {
	int y;
	scanf("%d", &y);
	if (y >= 1900)printf("%s\n",arr[ (y - 1900) % 12]);
	else printf("%s\n", arr[abs((y -4) + 12) % 12]);
	return 0;
}
