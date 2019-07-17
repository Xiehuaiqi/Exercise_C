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
//值传递
void printStudent1(struct student s){
    s.age = 100;
    cout << "子函数1中打印姓名：" <<s.name
         << " 年龄：" << s.age
         << " 分数：" << s.score <<endl;
};
//地址传递 修改形参外侧数据也会改变
//void printStudent2(const struct student *p){
void printStudent2(struct student *p){
    p->age = 50;
    cout << "子函数2中打印姓名：" <<p->name
         << " 年龄：" << p->age
         << " 分数：" << p->score <<endl;
};

int main(){
    struct student s;
    s.name = "张三";
    s.age = 20;
    s.score = 85;

//    printStudent2(&s);

    cout << "main函数中打印姓名：" <<s.name
         << " 年龄：" << s.age
         << " 分数：" << s.score <<endl;

    printStudent1(s);
    printStudent2(&s);

    return 0;
}