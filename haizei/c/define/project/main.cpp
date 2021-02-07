/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 02 Nov 2020 04:39:09 PM CST
 ************************************************************************/

#include <stdio.h>
#include <haizei/test.h>


int add(int a, int b) {
  return a + b;
}

TEST(testfunc, add) { //一个大TEST叫一组测试用例
  EXPECT_EQ(add(2, 3), 5);//一个EXPECT叫一个测试点
  EXPECT_NE(add(5, 3), 4);
  EXPECT_EQ(add(7, 2), 3);
  EXPECT_LT(add(9, 1), 1);
}
TEST(testfunc, add2) { //一个大TEST叫一组测试用例
  EXPECT_EQ(add(6, 3), 5);//一个EXPECT叫一个测试点
  EXPECT_GE(add(20, 3), 4);
  EXPECT_LE(add(1, 2), 4);
  EXPECT_GT(add(0, 1), 1);
}

int main() {
  //testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
  //return 0;
}

