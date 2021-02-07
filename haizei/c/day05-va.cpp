/*************************************************************************
        > File Name: day05-va.cpp
        > Author:
        > Mail:
        > Created Time: Thu 22 Oct 2020 06:55:23 PM CST
 ************************************************************************/
#include <inttypes.h>
#include <stdarg.h>
#include <stdio.h>
int max_int(int n, ...) {
  int ans = INT32_MIN;
  va_list arg;
  va_start(arg, n);
  while (n--) {
    int temp = va_arg(arg, int);
    if (temp > ans)
      ans = temp;
  }
  va_end(arg);
  return ans;
}
int main() {
  printf("%d\n", max_int(3, 1, 2, 5));
  printf("%d\n", max_int(6, 2, 4, 1, 7, 8, 12));
}
