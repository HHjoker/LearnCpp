#ifndef _TRUTLE_H_
#define _TRUTLE_H_

class Turtle {
public:
    Turtle() {}

    // 控制turtle运动是否留下痕迹
    virtual void penup() = 0;
    virtual void pendown() = 0;
    // 控制turtle的运动方向
    virtual void Forward(int distance) = 0; // 前进
    virtual void Trun(int degrees) = 0; // 转向
    virtual void GoTo(int x, int y) = 0; // 移动到指定位置

    // 获取turtle的位置
    virtual int getX() = 0;
    virtual int getY() = 0;

    virtual ~Turtle() {}

};

#endif