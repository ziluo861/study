/*************************************************************************
        > File Name: day03-revbase.cpp
        > Author:
        > Mail:
        > Created Time: Mon 19 Oct 2020 10:10:35 AM CST
 ************************************************************************/

#include <stdio.h>

bool rev_num(int x, int base) {
  if (__builtin_expect(
          !!(x < 0),
          0)) //!!(x<0) 表示归一化处理，__builtin_expect(!!(x < 0),
              //!0)表示x<0不常成立，即执行先从14行开始，若错误，在执行13行;
    return false;
  int temp = 0, y = x;
  while (x) {
    temp = temp * base + x % base;
    x /= base;
  }
  return temp == y;
}

int main() {
  int n, base;
  scanf("%d%d", &n, &base);
  printf("%s\n", rev_num(n, base) ? "YES" : "NO");
  return 0;
}
