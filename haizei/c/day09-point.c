/*************************************************************************
	> File Name: day09.point.c
	> Author: 
	> Mail: 
	> Created Time: Mon 02 Nov 2020 10:33:11 AM CST
 ************************************************************************/

#include <stdio.h>

struct Data {
  int x, y;
};

int main() {

struct Data a[2], *p = a;
a[0].x = 0, a[0].y = 1;
a[1].x = 2, a[1].y = 3;
printf("%d\n", (*(a + 1)).x);
printf("%d\n", (a + 1)->x);
printf("%d\n", (p+1)->x);
printf("%d\n", (*(p + 1)).x);
printf("%d\n", p[1].x);
printf("%d\n", (&p[1])->x);
printf("%d\n", (++p)->x);
p = a;
printf("%d\n", (&p[0] + 1)->x);
printf("%d\n", (*(&p[0] + 1)).x);
return 0;
}
