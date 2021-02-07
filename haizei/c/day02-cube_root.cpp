/*************************************************************************
        > File Name: day02-cube_root.cpp
        > Author:
        > Mail:
        > Created Time: Sat 17 Oct 2020 09:30:18 AM CST
 ************************************************************************/

#include <math.h>
#include <stdio.h>
int main() {
  double x;
  while (scanf("%lf", &x) != EOF) {
    printf("%lf\n", pow(x, 1.0 / 3.0));
  }
  return 0;
}
