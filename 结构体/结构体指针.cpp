//
// Created by zx on 19-7-16.
//
#include <iostream>
using namespace std;
#include <string>

struct student{
    string name;
    int age;
    int score;
};

int main(){
    struct student s = {"张三",18,100};
    student *p = &s;
    //通过结构体指针 访问结构体中的属性，需要利用‘->'操作符
    cout <<  "姓名： " << p->name
         << " 年龄： " << p->age
         << " 分数： " << p->score << endl;

    return 0;
}