/*************************************************************************
	> File Name: printf.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Oct 2020 08:58:05 AM CST
 ************************************************************************/
#include <stdarg.h>
#include <stdio.h>
#include <inttypes.h>
#define PUTC(a) putchar(a), cnt++;
int rev_num (int num, int *temp) {
	int dight = 0;
	*temp = 0;
	do {
		*temp = (*temp) * 10 + num % 10;
		num /= 10;
		dight++;
	} while (num);
	return dight;
}
int output(int num, int dight) {
	int cnt = 0;
	while(dight--) {
		putchar(num % 10 + '0');
		num /= 10;
		cnt++;
	}
	return cnt;
}
int my_printf(const char *fmt, ...) {
	va_list arg;
	va_start(arg, fmt);
	int cnt = 0;
  for(int i = 0; fmt[i]; i++) {
	  switch (fmt[i]) {
	  case '%' : {
		switch (fmt[++i]) {
		case '%' : {
		PUTC(fmt[i]);
		}break;
		case 'd' : {
		int xx = va_arg(arg, int), x1 = 0, x2 = 0;
		uint32_t x = 0;
		if (xx < 0) {
			PUTC('-');
			x = -xx;
		}else{
			x = xx;
		}
		x1 = x / 100000;
		x2 = x % 100000;
		int temp1, temp2, dight1 = 0, dight2 = 0;
		dight1 = rev_num(x1, &temp1);
		dight2 = rev_num(x2, &temp2);
		if(x1) dight2 = 5;
		else dight1 = 0;
		cnt += output(temp1, dight1);
		cnt += output(temp2, dight2);
		}break;
		case 's' :{
		const char *str = va_arg(arg, const char*);
		for (int i = 0; str[i]; i++) {
			PUTC(str[i]);
		}
	    }break;
	  }   
	  }break;
	  default: 
	  PUTC(fmt[i]);
	  break;
  }
}
  va_end(arg);
  return cnt;
}


int main() {
  int a = -123, b = 10000; 
  char str[100] = "hello world";
  printf("hello\n");
  my_printf("hello\n");
  printf("%%\n");
  my_printf("%%\n");
  printf("%d\n", a);
  my_printf("%d\n", a);
  printf("%d\n", b);
  my_printf("%d\n", b);
  printf("INT32_MAX = %d\n",INT32_MAX);
  my_printf("INT32_MAX = %d\n",INT32_MAX);
  printf("INT32_MIN = %d\n",INT32_MIN);
  my_printf("INT32_MIN = %d\n",INT32_MIN);
  printf(" has %d dights\n", printf("hello world"));
  my_printf(" has %d dights\n", my_printf("hello world"));
  printf("%s\n", str);
  my_printf("%s\n", str);
}
