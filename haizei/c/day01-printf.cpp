/*************************************************************************
        > File Name: day01-printf.cpp
        > Author:
        > Mail:
        > Created Time: Fri 16 Oct 2020 06:56:54 PM CST
 ************************************************************************/

#include <stdio.h>
#define swap(a, b)                                                             \
  {                                                                            \
    __typeof(a) __temp = a;                                                    \
    a = b;                                                                     \
    b = __temp;                                                                \
  }
int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", n);
  char str[1000] = {0}, buffer[1000] = {0}, *p = str, *q = buffer;
  sprintf(str, "%d.%d.%d.%d", 192, 168, 1, 2);
  printf("%s\n", str);
  if (n & 1) {
    sprintf(q, "(%s)", p);
    swap(p, q);
  }
  if (n & 2) {
    sprintf(q, "[%s]", p);
    swap(p, q);
  }
  if (n & 4) {
    sprintf(q, "{%s}", p);
    swap(p, q);
  }
  printf("%s\n", p);
  FILE *fp = fopen("output", "w");
  fprintf(fp, "str=%s\n", p);
  fprintf(stdout, "stdout=%s\n", p);
  fprintf(stdout, "stdout=%s\n", q);
  fclose(fp);
  return 0;
}
