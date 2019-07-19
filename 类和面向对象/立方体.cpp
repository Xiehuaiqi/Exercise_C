//
// Created by zx on 19-7-19.
//
#include <iostream>
#include <string>
using namespace std;

class Cube{
public:
    void setL(int l){
        m_L = l;
    }
    void setW(int w){
        m_W = w;
    }
    void setH(int h){
        m_H = h;
    }

    int getL(){
        return m_L;
    }

    int getH(){
        return m_H;
    }

    int getW(){
        return m_W;
    }


    int calculateS(){
        return 2*(m_H*m_W + m_H*m_L + m_W*m_L);
    };
    int calculateV(){
        return m_H * m_W * m_L;
    };
    //成员函数输入一个就可以
    bool isSameByClass(Cube &c){
        if(m_L == c.getL() && m_W == c.getW() && m_H == c.getH()){
            return true;
        }
    }
private:
    int m_L;
    int m_W;
    int m_H;

};

bool isSame(Cube &c1 , Cube &c2){
    if(c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()){
        return true;
    }
}

int main(){
    Cube c1;
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);

    cout << "c1的面积为： " << c1.calculateS() << endl;
    cout << "c1的体积为： " << c1.calculateV() << endl;

    Cube c2;
    c2.setL(10);
    c2.setW(11);
    c2.setH(10);
    //利用全局函数判断
    bool ret = isSame(c1, c2);
    if(ret){
        cout << "c1和c2是相等的！" << endl;
    } else{
        cout << "c1和c2是不相等的！" << endl;
    }
    //利用成员函数判断
    ret = c1.isSameByClass(c2);
    if(ret){
        cout << "成员函数判断：c1和c2是相等的！" << endl;
    } else{
        cout << "成员函数判断：c1和c2是不相等的！" << endl;
    }

    return 0;
}
