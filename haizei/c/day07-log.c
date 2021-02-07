/*************************************************************************
	> File Name: day07-log.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Oct 2020 07:59:41 PM CST
 ************************************************************************/

#include<stdio.h>
// #args 将args转为字符串
// ##为连接
// frm##args，将frm, args连接在一起
//#define DEBUG
#ifdef DEBUG
#define log(frm, args...) { \
	printf("[%s : %s : %d] ", __FILE__, __func__, __LINE__); \
	printf(frm, ##args); \
	printf("\n"); \
}
#else
#define log(frm, args...)
#endif
//a##b 将ab连接在一起
#define contact(a, b) a##b

int main() {
  int a = 123;
  int b = 234;
  int abcdef = 0, abc, def;
  log("%d", b);
  log("hello,world")
  contact(abc,def) = 1000;
  log("%d", abcdef);
  return 0;
}
