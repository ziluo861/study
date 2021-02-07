/*************************************************************************
        > File Name: day06-signprime.c
        > Author:
        > Mail:
        > Created Time: Sat 24 Oct 2020 03:50:37 PM CST
 ************************************************************************/

#include <stdio.h>
#define max_n 200000
int prime[max_n + 5];

void init() {
  for (int i = 2; i <= max_n; i++) { //N = M * P ; i == M, P == prime[j]
    if (!prime[i]) prime[++prime[0]] = i;
    for (int j = 1; j <= prime[0]; j++) {
      if (i * prime[j] > max_n) break;
      prime[prime[j] * i] = 1;
      if (i % prime[j] == 0) break;
    }
  }
  return;
}

int main() {
  init();
  printf("%d\n", prime[10001]);
  return 0;
}
