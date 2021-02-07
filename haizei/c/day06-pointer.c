/*************************************************************************
	> File Name: day06-pointer.c
	> Author: 
	> Mail: 
	> Created Time: Sat 24 Oct 2020 08:29:50 PM CST
 ************************************************************************/

#include<stdio.h>
#define max_n 100

void func(int *num) {
  printf("num = %p, num[1] = %p\n", num, num + 1);
  printf("&num[0] = %p, &num[1] = %p\n", &num[0], &num[1]);
  return;
}

void func2(int (*num)[100]) {
  printf("num2 = %p, num2[1] = %p\n", num, num + 1);
  printf("&num2[0] = %p, &num2[1] = %p\n", &num[0], &num[1]);
  return;
}

void func3(int (*num)[100][100]) {
  printf("num3 = %p, num3[1] = %p\n", num, num + 1);
  printf("&num3[0] = %p, &num3[1] = %p\n", &num[0], &num[1]);
  return;
}

int main() {
  int arr[max_n+5];
  int arr2[100][100];
  int arr3[100][100][100];
  printf("sizeof(arr) = %lu\n", sizeof(arr));
  printf("arr= %p, arr+1=%p\n", arr,arr+1);
  printf("&arr[0]= %p, &arr[1]=%p\n", &arr[0], &arr[1]);
  char *p = (char *)arr;
  printf("p= %p, p+1=%p\n", p, p+1);
  printf("&p[0]= %p, &p[1]=%p\n", &p[0], &p[1]);
  int **q;
  printf("q = %p, q + 1 = %p\n", q, q+1);
  printf("\n");
  func(arr);
  func2(arr2);
  func3(arr3);
  return 0;
}
