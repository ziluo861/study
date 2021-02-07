/*************************************************************************
        > File Name: day03-year.cpp
        > Author:
        > Mail:
        > Created Time: Sun 18 Oct 2020 02:01:54 PM CST
 ************************************************************************/

#include <stdio.h>
int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int check(int y, int m, int d) {
  if (m <= 0 || m > 12 || d < 0)
    return 0;
  if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
    month[2] += 1;
  return d <= month[m];
}
int main() {
  int year, mon, day;
  scanf("%d%d%d", &year, &mon, &day);
  printf("%s\n", check(year, mon, day) ? "YES" : "NO");
  return 0;
}
