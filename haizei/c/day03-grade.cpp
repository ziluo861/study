/*************************************************************************
        > File Name: day03-grade.cpp
        > Author:
        > Mail:
        > Created Time: Sat 17 Oct 2020 02:42:32 PM CST
 ************************************************************************/

#include <stdio.h>
int main() {
  int n;
  while (scanf("%d", &n) != EOF) {
    if (!n) {
      printf("FOOLISH\n");
    } else if (n < 60) {
      printf("FAIL\n");
    } else if (n < 75) {
      printf("MEDIUM\n");
    } else if (n <= 100) {
      printf("GOOD\n");
    } else {
      printf("number error\n");
      printf("enter the number\n");
      continue;
    }
  }
  return 0;
}
