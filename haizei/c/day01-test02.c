/*************************************************************************
        > File Name: day01-test02.c
        > Author:
        > Mail:
        > Created Time: Tue 13 Oct 2020 08:43:03 PM CST
 ************************************************************************/

#include <stdio.h>
int main() {
  char str[100];
  while (scanf("%[^\n]s", str) !=
         EOF) { // while(~scanf("%[^\n]s",str))也可以循环读入
    getchar();
    printf(" has %d digit\n", printf("%s", str));
  }
  return 0;
}
