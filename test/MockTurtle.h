#ifndef _MOCK_TURTLE_H_
#define _MOCK_TURTLE_H_

#include "../../src/turtle/turtle.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

class MockTurtle : public Turtle
{
public:
    MockTurtle() {}
    ~MockTurtle() {}

    MOCK_METHOD0(penup, void());
    MOCK_METHOD0(pendown, void());
    MOCK_METHOD1(Forward, void(int distance));
    MOCK_METHOD1(Trun, void(int degrees));
    MOCK_METHOD2(GoTo, void(int x, int y));
    MOCK_METHOD0(getX, int());
    MOCK_METHOD0(getY, int());
};

#endif