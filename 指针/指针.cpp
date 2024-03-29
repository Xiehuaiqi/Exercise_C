//
// Created by zx on 19-7-16.
//
#include <iostream>
using namespace std;

int main(){
    int a = 10;
    //指针定义：数据类型* 指针变量名
    int * p;
    //指针变量记录a的地址,建立指针与变量的关系
    p = &a;

    cout << "a的地址为：" << &a << endl;
    cout << "指针p为：" << *p << endl;

    //2.使用指针
    //可以通过解引用的方式来找到指针指向的内存
    //指针前加* 代表解引用，找到指针指向的内存中的数据
    *p = 1000;

    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;
    cout << "sizeof(int*) = " << sizeof(int *) << endl;
}