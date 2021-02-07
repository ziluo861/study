/*************************************************************************
        > File Name: day03-switch.cpp
        > Author:
        > Mail:
        > Created Time: Sat 17 Oct 2020 03:14:18 PM CST
 ************************************************************************/

#include <stdio.h>
int main() {
  int n;
  while (scanf("%d", &n) != EOF) {
    switch (n) {
    case 1:
      printf("one\n");
      break;
    case 2:
      printf("two\n");
      break;
    case 3:
      printf("three\n");
      break;
    default:
      printf("error\n");
      break;
    }
  }

  return 0;
}
