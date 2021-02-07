/*************************************************************************
	> File Name: day09-func.c
	> Author: 
	> Mail: 
	> Created Time: Mon 02 Nov 2020 12:47:08 PM CST
 ************************************************************************/

#include <stdio.h>

void funcA(int);
void funcB(int);

int main() {

  funcA(5);

  return 0;
}

void funcA(int n) {
  if (n == 0) return ;
  printf("funcA = %d\n", n);
  funcB(n - 1);
  return ;
}

void funcB(int n) {
  if (n ==0) return ;
  printf("funcB = %d\n", n);
  funcA(n - 1);
  return ;
}
