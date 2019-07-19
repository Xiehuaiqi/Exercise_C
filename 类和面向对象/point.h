//
// Created by zx on 19-7-19.
//

#ifndef EXERCISE_POINT_H
#define EXERCISE_POINT_H

#endif //EXERCISE_POINT_H

#pragma once //防止头文件重复包含

#include <iostream>
#include <string>
using namespace std;

class Point{
public:
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();

private:
    int m_x;
    int m_y;
};

