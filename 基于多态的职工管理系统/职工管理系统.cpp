//
// Created by xhq on 2019/8/15.
//

#include <iostream>
#include "workManager.h"
using namespace std;

int main(){
    //实例化管理者对象
    WorkerManager wm;

    //调用展示菜单成员函数
    wm.Show_Menu();

    system("pause");

    return 0;
}
