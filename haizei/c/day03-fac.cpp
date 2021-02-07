/*************************************************************************
        > File Name: day03-jie.cpp
        > Author:
        > Mail:
        > Created Time: Sat 17 Oct 2020 08:50:13 PM CST
 ************************************************************************/

#include <stdio.h>
int fac(int x) {
  if (x <= 1)
    return 1;
  return x * fac(x - 1);
}
int main() {
  int n;
  scanf("%d", &n);

  int value = fac(n);
  printf("%d\n", value);

  return 0;
}
