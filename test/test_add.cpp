#include <gtest/gtest.h>
#include "../src/add_dir/add.h"

// 示例测试用例
TEST(Sum, sum_1) {
    int a = 1;
    int b = 2;

    Add add;
    int c = add.add(a, b);
    EXPECT_EQ(c, 3);
}