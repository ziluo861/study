/*************************************************************************
        > File Name: day03-rev.cpp
        > Author:
        > Mail:
        > Created Time: Sun 18 Oct 2020 02:20:35 PM CST
 ************************************************************************/

#include <stdio.h>

int rev(int x) {
  if (x < 0)
    return 0;

  int temp = 0, y = x;
  while (x) {
    temp = temp * 10 + x % 10;
    x /= 10;
  }
  return temp;
}

int main() {
  int n;
  scanf("%d", &n);

  printf("%d\n", rev(n));

  return 0;
}
