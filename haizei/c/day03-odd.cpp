/*************************************************************************
        > File Name: day03-odd.cpp
        > Author:
        > Mail:
        > Created Time: Sun 18 Oct 2020 02:26:30 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  srand(time(NULL));
  int n, cnt = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int val = rand() % 100 + 1;
    cnt += !(val & 1);
    i &&printf(" ");
    printf("%d", val);
  }
  printf("\n");
  printf("cnt = %d\n", cnt);
  return 0;
}
