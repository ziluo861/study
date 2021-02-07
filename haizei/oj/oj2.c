/*************************************************************************
	> File Name: oj2.c
	> Author: 
	> Mail: 
	> Created Time: Mon 26 Oct 2020 11:05:17 AM CST
	这一天，老师找到小明，让他写一个程序，用来处理《C++程序设计》课程中学生的成绩。
这是一门考查课，成绩分为A，B，C，D四档。
0 <= grade < 60     D
60 <= grade < 75    C
75 <= grade < 85    B
85 <= grade <= 100    A
 ************************************************************************/

#include<stdio.h>

int main() {
	int grade;
	scanf("%d",&grade);
	if (grade < 60) printf("D\n");
	else if (grade < 75) printf("C\n");
	else if (grade <85) printf("B\n");
	else printf("A\n");
	return 0;
}
