/*************************************************************************
        > File Name: day04-gcd-ex.c
        > Author:
        > Mail:
        > Created Time: Sat 24 Oct 2020 10:30:42 AM CST
 ************************************************************************/

#include <stdio.h>

int ex_gcd(int a, int b, int *x, int *y) {
  if (!b) {
    *x = 1;
    *y = 0;
    return a;
  }
  int xx, yy, ret = ex_gcd(b, a % b, &xx, &yy);
  *x = yy;
  *y = xx - a / b * yy;
  return ret;
}

int main() {
  int a, b, x, y;
  while (~(scanf("%d%d", &a, &b))) {
    printf("gcd(%d,%d) = %d\n", a, b, ex_gcd(a, b, &x, &y));
    printf("%d * %d + %d * %d = %d\n", a, x, b, y, a * x + b * y);
  }
  return 0;
}
