/*************************************************************************
	> File Name: oj124.c
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Oct 2020 02:20:17 PM CST
	某厂进行招聘，收到了很多简历，每一份简历包含以下元素：
学历。0 表示本科毕业，1 表示硕士毕业，2 表示博士毕业;
毕业院校的排名。用一个 1−1000 的整数表示，数字越小越好；
年龄大小。一个 10−80 之间的整数；
工作年份。一个 0−30 之间的整数。
由于简历太多，我们需要筛掉一部分简历进行面试，面试的条件为：
学校排名在前 50 （含），或学历在硕士及以上
年龄小于等于 25，或工作年份在 5年及以上的
请根据简历的条件判断是否进行面试。
 ************************************************************************/

#include<stdio.h>

int main() {
	int edu, sch, year, work_year;
	scanf("%d%d%d%d", &edu, &sch, &year, &work_year);
	if ( (edu >= 1 || sch <= 50) && (year <= 25 || work_year >= 5) )
		printf("ok\n");
	else
		printf("pass\n");

}