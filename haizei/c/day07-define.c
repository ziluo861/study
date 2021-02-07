/*************************************************************************
	> File Name: day07-define.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Oct 2020 07:11:33 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX(a,b) ({ \
	__typeof(a) _a = (a); \
	__typeof(b) _b = (b); \
	(_a) > (_b) ? (_a) : (_b) ; \
} )
//#func 即将func转为字符串
#define P(func) { \
	printf("%s = %d\n", #func, func); \
}
int main() {
  //printf("MAX(2, 3) = %d\n", MAX(2, 3));
  //printf("5 + MAX(2, 3) = %d\n", 5 + MAX(2, 3));
  //printf("MAX(2, MAX(3, 4)) = %d\n", MAX(2, MAX(3, 4)));
  //printf("MAX(2, 3 > 4 ? 3 : 4) = %d\n", MAX(2, 3 > 4 ? 3 : 4));
  int a = 7;
  //printf("MAX(a++, 6) = %d\n", MAX(a++, 6));
  //printf("a = %d\n", a);
  P( MAX(2, 3) );
  P( 5 + MAX(2, 3) );
  P( MAX(2, MAX(3, 4)) );
  P( MAX(2, 3 > 4 ? 3 : 4) );
  P( MAX(a++, 6) );
  P( a );
  return 0;
}
