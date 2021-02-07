/*************************************************************************
        > File Name: day06-halfselect.c
        > Author:
        > Mail:
        > Created Time: Sat 24 Oct 2020 04:54:36 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

double f (double x) {
  return x * x;
}

double binary_search(double (*arr)(double), double x) {
  double head = 0, tail = x, mid;
  if (x < 1.0) tail = 1.0;
#define EPSL 1e-7
  while (tail - head > EPSL) {
    mid = (head + tail) / 2.0;
    if (arr(mid) < x) head = mid;
    else tail = mid;
  }
#undef EPSL
  return head;
}

double my_sqrt(double value) {
  return binary_search(f, value);
}

int main() { 
 // int num[10];
 // for (int i = 0; i < 10; i++) num[i] = i * i;
  double x;
  while ( ~scanf("%lf",&x) ) {
    printf(" sqrt(%g) = %g\n", x, sqrt(x));
    printf(" my_sqrt(%g) = %g\n", x, my_sqrt(x));
  }
  return 0; 
}

