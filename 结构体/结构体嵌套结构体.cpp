//
// Created by zx on 19-7-16.
//

#include <iostream>
#include <string>
using namespace std;

struct student{
    string name;
    int age;
    int score;
};
struct teacher{
    int id;
    string name;
    int age;
    struct student stu;
};
int main(){
    teacher t;
    t.id = 1000;
    t.age = 50;
    t.name = "老王";
    t.stu.name = "小王";
    t.stu.age = 20;
    t.stu.score = 100;

    cout << "老师姓名：" << t.name
        << " 老师编号：" << t.id
        << " 老师年龄"  <<t.age<<endl;
    cout << "老师辅导的学生姓名：" << t.stu.name
         << " 学生分数：" << t.stu.score
         << " 学生年龄："  <<t.stu.age<<endl;
}