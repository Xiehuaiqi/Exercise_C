//
// Created by zx on 19-7-19.
//

//
// Created by zx on 19-7-19.
//

#include "point.h"
#include "circle.h"

//判断点与圆的关系
void isInCircle(Circle &c, Point &p){
    int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

    int rDistance = c.getR() * c.getR();

    //判断关系
    if(distance == rDistance){
        cout << "点在圆上" << endl;
    } else if(distance > rDistance){
        cout << "点在圆外" << endl;
    } else{
        cout << "点在圆内" << endl;
    }

}

int main(){

    Circle c;
    c.setR(10);
    //创建圆
    Point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);
    //创建点
    Point p;
    p.setX(10);
    p.setY(10);
    //判断关系
    isInCircle(c,p);

    return 0;
}