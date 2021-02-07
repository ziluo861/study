/*************************************************************************
        > File Name: day06-signprime.cpp
        > Author:
        > Mail:
        > Created Time: Sat 24 Oct 2020 02:31:10 PM CST
 ************************************************************************/

#include <stdio.h>
const int max_n = 100;
int prime[max_n + 5]; //定义在函数外部，一般不用初始化为0

void init() {
  for(int i = 2; i * i <= max_n; i++) {
    if(!prime[i]) prime[++prime[0]] = i;
    for(int j = i * 2; j <= max_n; j += i) {
      prime[j] = 1;
    }
  }
}

int main() {
  init();
  for (int i = 1; i <= prime[0]; i++) {
    printf("%d ", prime[i]);
  }
  printf("\n");
  return 0;
}
