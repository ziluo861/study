/*************************************************************************
	> File Name: day09.pointer.c
	> Author: 
	> Mail: 
	> Created Time: Mon 02 Nov 2020 11:38:44 AM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Data {
	int a;
	double b;
	char c;
};
//传入一个类型和 
//定义一个对象一个字段

//#define offset(T, a) ({ \
//	T temp; \
//	(char *)(&(temp.a)) - (char *)(&temp); \
//})

#define offset(T, a) (long)(&(((T *)(NULL))->a))

#define ppchar char *
typedef char * pchar;

void output(int argc, char *argv[]) {
	printf("argc = %d\n", argc);
	for (int i = 0; i < argc; i++) {
		printf("argv[%d] = %s\n", i, argv[i]);
	}

}
void output2(char **env) {
	for (int i = 0; env[i]; i++) {
		printf("env[%d] = %s\n", i, env[i]);
	}
}

void output3(char **env) {
	for (int i = 0; env[i]; i++) {
		if (!strncmp(env[i], "USER=", 5)) {
			if (!strcmp(env[i] + 5, "luo")) {
				printf("welcome capatin luo\n");
			}else{
				printf("you are not the user! please gun\n");
				exit(0);
			}
		}
	}
}

int main(int argc, char *argv[], char **env) {
  int num = 0x00626364;
  printf("%s\n", (char *)(&num));
  printf("%ld\n", offset(struct Data, a));
  printf("%ld\n", offset(struct Data, b));
  printf("%ld\n", offset(struct Data, c));
  ppchar p1, p2;
  pchar p3, p4;
  printf("p1 = %lu, p2 = %lu\n", sizeof(p1), sizeof(p2));
  printf("p3 = %lu, p4 = %lu\n", sizeof(p3), sizeof(p4));
  output(argc, argv);
  output2(env);
  output3(env);
  return 0;
}
