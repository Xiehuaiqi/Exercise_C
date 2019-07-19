//
// Created by zx on 19-7-19.
//

#ifndef EXERCISE_CIRCLE_H
#define EXERCISE_CIRCLE_H

#endif //EXERCISE_CIRCLE_H

#pragma once //防止头文件重复包含

#include <iostream>
#include <string>
#include "point.h"
using namespace std;

class Circle{
public:
    void setR(int r);
    int getR();
    void setCenter(Point center);
    Point getCenter();
private:
    int m_R;
    //在类中可以让另一个类 作为本来中的成员
    Point m_Center;
};