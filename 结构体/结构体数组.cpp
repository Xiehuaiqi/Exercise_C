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
    struct student stuArray[3] = {
            {"张三", 18, 100},
            {"李四", 19, 80},
            {"王五", 20,  60},
    };
    stuArray[2].age = 30;
    for (int i=0;i<3;i++){
        cout << "姓名："<< stuArray[i].name
             << " 年龄：" << stuArray[i].age
             << " 分数："<<stuArray[i].score<<endl;
    }
}
