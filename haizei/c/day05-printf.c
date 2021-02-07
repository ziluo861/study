/*************************************************************************
        > File Name: day05-printf.c
        > Author:
        > Mail:
        > Created Time: Thu 22 Oct 2020 07:07:39 PM CST
 ************************************************************************/
#include <inttypes.h>
#include <stdarg.h>
#include <stdio.h>
int rev_num(int n, int *temp) {
  int digit = 0;
  *temp = 0;
  do {
    *temp = *temp * 10 + n % 10;
    n /= 10;
    digit++;
  } while (n);
  return digit;
}
int output_num(int n, int digit) {
  int cnt = 0;
  while (digit--) {
    putchar(n % 10 + 48), ++cnt;
    n /= 10;
  }
  return cnt;
}
int my_printf(const char *frm, ...) {
  int cnt = 0;
  va_list arg;
  va_start(arg, frm);
#define PUTC(a) putchar(a), ++cnt
  for (int i = 0; frm[i]; i++) {
    switch (frm[i]) {
    case '%': {
      switch (frm[++i]) {
      case '%':
        PUTC(frm[i]);
        break;
      case 'd': {
        int xx = va_arg(arg, int);
        uint32_t x;
        if (xx < 0)
          PUTC('-'), x = -xx;
        else
          x = xx;
        int temp1, temp2;
        int x1 = x / 100000, x2 = x % 100000;
        int digit1 = rev_num(x1, &temp1);
        int digit2 = rev_num(x2, &temp2);
        if (x1)
          digit2 = 5;
        else
          digit1 = 0;
        cnt += output_num(temp1, digit1);
        cnt += output_num(temp2, digit2);
      } break;
      case 's': {
        const char *str = va_arg(arg, const char *);
        for (int i = 0; str[i]; i++) {
          PUTC(str[i]);
        }
      } break;
      }
    } break;
    default:
      PUTC(frm[i]);
      break;
    }
  }
#undef PUTC
  va_end(arg);
  return cnt;
}
int main() {
  int a = 124;
  int n;
  while (~scanf("%d", &n)) {
    printf(" has %d digits\n", printf("%d", n));
    my_printf(" has %d digits\n", my_printf("%d", n));
  }
  printf("hello\n");
  my_printf("hello\n");
  printf("int(a)=%d\n", a);
  my_printf("int(a)=%d\n", a);
  printf("int(a)=%d\n", 0);
  my_printf("int(a)=%d\n", 0);
  printf("int(a)=%d\n", 1000);
  my_printf("int(a)=%d\n", 1000);
  printf("int(a)=%d\n", -123);
  my_printf("int(a)=%d\n", -123);
  printf("INT32_MAX=%d\n", INT32_MAX);
  my_printf("INT32_MAX=%d\n", INT32_MAX);
  printf("INT32_MIN=%d\n", INT32_MIN);
  my_printf("INT32_MIN=%d\n", INT32_MIN);
  return 0;
}
