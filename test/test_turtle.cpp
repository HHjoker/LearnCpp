#include "test_turtle.h"
#include "MockTurtle.h"
#include "../../src/turtle/Painter.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

// 从命名空间testing导入gmock名称
using ::testing::AtLeast;
using ::testing::Return;

TEST(PainterTest, DrawCircleTest)
{
    // 创建mock对象
    MockTurtle turtle;
    // atleast(1)表示至少调用一次
    EXPECT_CALL(turtle, pendown())
        .Times(AtLeast(1));
    
    Painter painter(&turtle);

    EXPECT_TRUE(painter.DrawCircle(0, 0, 10));

    EXPECT_CALL(turtle, getX())
        .WillOnce(Return(10));
    EXPECT_CALL(turtle, getY())
        .WillOnce(Return(20));

    EXPECT_EQ(30, painter.DrawXandY());
}