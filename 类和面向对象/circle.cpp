//
// Created by zx on 19-7-19.
//
#include "circle.h"
#include "point.h"

void Circle::setR(int r){
    m_R = r;
}
int Circle::getR(){
    return m_R;
}
void Circle::setCenter(Point center){
    m_Center = center;
}
Point getCenter(){
    return m_Center;
}
