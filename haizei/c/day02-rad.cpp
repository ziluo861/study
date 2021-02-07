/*************************************************************************
        > File Name: day02-rad.cpp
        > Author:
        > Mail:
        > Created Time: Sat 17 Oct 2020 09:35:11 AM CST
 ************************************************************************/

#include <math.h>
#include <stdio.h>
const double PI = acos(-1);
int main() {
  double rad;
  while (scanf("%lf", &rad) != EOF) {
    printf("%lf\n", PI / 180 * rad);
  }
}
