/*************************************************************************
        > File Name: day02-log.cpp
        > Author:
        > Mail:
        > Created Time: Sat 17 Oct 2020 09:42:24 AM CST
 ************************************************************************/

#include <math.h>
#include <stdio.h>
int main() {
  double log_x, log_y;
  while (scanf("%lf"
               "%lf",
               &log_x, &log_y) != EOF) {
    printf("%lf\n", log(log_y) / log(log_x));
  }

  return 0;
}
