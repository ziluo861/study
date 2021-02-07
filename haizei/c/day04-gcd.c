/*************************************************************************
        > File Name: day04-gcd.c
        > Author:
        > Mail:
        > Created Time: Sat 24 Oct 2020 09:51:38 AM CST
 ************************************************************************/

#include <stdio.h>

int gcd(int a, int b) { return (b ? gcd(b, a % b) : a); }

int main() {
  int a, b;
  while (~(scanf("%d%d", &a, &b))) {
    printf("gcd(%d,%d) = %d\n", a, b, gcd(a, b));
  }
  return 0;
}
