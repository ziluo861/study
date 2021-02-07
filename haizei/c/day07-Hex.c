/*************************************************************************
	> File Name: day07-Hex.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Oct 2020 09:02:41 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main() {
  char str[11];
  int n;
  while( ~scanf("%d", &n) ) {
    sprintf(str, "%X", n);
    printf("%d(%s) has %lu digits\n", n, str, strlen(str));
  }
  return 0;
}
