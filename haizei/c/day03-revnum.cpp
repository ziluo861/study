/*************************************************************************
        > File Name: day03-rev.c
        > Author:
        > Mail:
        > Created Time: Sun 18 Oct 2020 02:14:25 PM CST
 ************************************************************************/

#include <stdio.h>

bool rev_num(int x) {
  if (__builtin_expect(!!(x < 0), 0))
    return false;
  int temp = 0, y = x;
  while (x) {
    temp = temp * 10 + x % 10;
    x /= 10;
  }
  return temp == y;
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%s\n", rev_num(n) ? "YES" : "NO");
  return 0;
}
