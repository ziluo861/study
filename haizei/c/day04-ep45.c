/*************************************************************************
        > File Name: day04-ep45.c
        > Author:
        > Mail:
        > Created Time: Sat 24 Oct 2020 08:54:38 AM CST
 ************************************************************************/

#include <stdio.h>
typedef long long ll;
ll Triangle(ll n) { return n * (n + 1) / 2; }
ll Pentagonal(ll n) { return n * (3 * n - 1) / 2; }
ll Hexagonal(ll n) { return n * (2 * n - 1); }
ll binary_search(ll (*arr)(ll), ll n, ll x) {
  ll head = 1;
  ll tail = n;
  ll mid;
  while (head <= tail) {
    mid = (head + tail) >> 1;
    if (arr(mid) == x)
      return mid;
    if (arr(mid) < x)
      head = mid + 1;
    else
      tail = mid - 1;
  }
  return -1;
}
int main() {
  // ll n = 285;
  ll n = 143;
  while (1) {
    n += 1;
    // ll temp = Triangle(n);
    ll temp = Hexagonal(n);
    if (binary_search(Pentagonal, temp, temp) == -1) continue;
    // if (binary_search(Hexagonal, temp, temp) == -1)
    // continue;
    // if (binary_search(Triangle, temp, temp) == -1)
    // continue;(一个函数是六边形，也必定是三角形)
    printf("%lld\n", temp);
    break;
  }
  return 0;
}
