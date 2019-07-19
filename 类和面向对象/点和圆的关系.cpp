//
// Created by zx on 19-7-19.
//

#include <iostream>
#include <string>
using namespace std;

class Point{
public:
    void setX(int x){
        m_x = x;
    }
    void setY(int y){
        m_y = y;
    }
    int getX(){
        return m_x;
    }
    int getY(){
        return m_y;
    }

private:
    int m_x;
    int m_y;
};

class Circle{
public:
    void setR(int r){
        m_R = r;
    }
    int getR(){
        return m_R;
    }
    void setCenter(Point center){
        m_Center = center;
    }
    Point getCenter(){
        return m_Center;
    }
private:
    int m_R;
    //在类中可以让另一个类 作为本来中的成员
    Point m_Center;
};

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
    p.setY(11);
    //判断关系
    isInCircle(c,p);

    return 0;
}