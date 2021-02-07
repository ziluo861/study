/*************************************************************************
	> File Name: day08-ip.c
	> Author: 
	> Mail: 
	> Created Time: Thu 29 Oct 2020 07:19:33 PM CST
 ************************************************************************/

#include<stdio.h>
 union ipv4 {
  struct {
  unsigned char a;
  unsigned char b;
  unsigned char c;
  unsigned char d;
  } num;
  unsigned int  ip;
};

int is_little() { //判断为大端机还是小端机，为1小端机，为0为大端机
	static int num = 1;
	return ((char *)(&num))[0];
}

int main() {
  printf("%d\n", is_little() );
  union ipv4 ips;
  char str[100] = {0};
  int arr[4];
  while ( ~ scanf("%s", str) ) {
  sscanf(str,"%d.%d.%d.%d", arr, arr + 1, arr + 2, arr + 3);
  ips.num.a = arr[0];
  ips.num.b = arr[1];
  ips.num.c = arr[2];
  ips.num.d = arr[3];
  printf("%u\n", ips.ip);
  }
  return 0;
}

