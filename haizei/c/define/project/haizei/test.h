/*************************************************************************
	> File Name: test.h
	> Author: 
	> Mail: 
	> Created Time: Tue 03 Nov 2020 06:28:39 PM CST
 ************************************************************************/
#include <haizei/linklist.h>
#ifndef _TEST_H
#define _TEST_H

#define COLOR(a, b) "\033[" #b "m" a "\033[0m"
#define COLOR_HL(a, b) "\033[1;" #b "m" a "\033[0m"

#define GREEN(a) COLOR(a, 32)
#define RED(a) COLOR(a, 31)
#define BULE(a) COLOR(a, 34)
#define YELLOW(a) COLOR(a, 33)
#define PURPLE(a) COLOR(a, 35)
#define GREEN_HL(a) COLOR_HL(a, 32)
#define RED_HL(a) COLOR_HL(a, 31)
#define BULE_HL(a) COLOR_HL(a, 34)
#define YELLOW_HL(a) COLOR_HL(a, 33)
#define PURPLE_HL(a) COLOR_HL(a, 35)


//constructor 让函数优于主函数运行
#define TEST(a, b) \
void a##_haizei_##b(); \
__attribute__((constructor)) \
void add##_haizei_##a_##_haizei_##b() { \
	add_function(a##_haizei_##b, #a "." #b); \
} \
void a##_haizei_##b()


#define EXPECT(a, comp, b) { \
	__typeof(a) __a = (a), __b = (b); \
	haizei_testinfo.total += 1; \
    if ((__a) comp (__b)) haizei_testinfo.success += 1; \
	else{ \
		printf(YELLOW_HL("\n%16s:%d: failure\n"), __FILE__, __LINE__); \
		printf(YELLOW_HL("%24s : %s %s %s\n"), "expect", (#a), (#comp), (#b)); \
		printf(YELLOW_HL("%24s : %d vs %d\n\n"), "actual", __a, __b); \
	} \
	printf(GREEN("[-----------]")); \
	printf(" %s %s %s ? %s\n", (#a), (#comp), (#b), (__a) comp (__b) ? GREEN("TRUE") : RED("FLASE")); \
}

#define EXPECT_EQ(a, b) EXPECT(a, ==, b);
#define EXPECT_NE(a, b) EXPECT(a, !=, b);
#define EXPECT_LT(a, b) EXPECT(a, <, b);
#define EXPECT_LE(a, b) EXPECT(a, <=, b);
#define EXPECT_GT(a, b) EXPECT(a, >, b);
#define EXPECT_GE(a, b) EXPECT(a, >=, b);

typedef void (*testfunct)();

typedef struct Function {
	testfunct func;
	const char *str;
	struct LinkNode p;
} Function;

struct Function_Info {
	int total, success;
};

extern struct Function_Info haizei_testinfo;

int RUN_ALL_TESTS();

void add_function(testfunct, const char *);

#endif
