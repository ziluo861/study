/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 14 Nov 2020 06:54:45 PM CST
 ************************************************************************/

#include <stdio.h>

union Ip {
  int n;
  char part[4];
};

int main() {
  int num[4];
  scanf("%d.%d.%d.%d", num, num + 1, num + 2, num + 3);
  Ip ip;
  for (int i = 3; i >= 0; i--) {
    ip.part[i] = num[i];
  }
  printf("%d\n", ip.n);
  return 0;
}
