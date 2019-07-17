//
// Created by zx on 19-7-16.
//
#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    //const修饰指针
    const int *p  = &a;
    p = &b;
    //const修饰常量
    int * const p = &a;
    *p = 100;
    //const修饰指针和常量
    const int * const p3 = &a;

}

// const 修饰指针 ----常量指针
// const int * p = &a;
// 常量指针
// 特点：指针指向可以修改,指针指向的值不可以修改

// const 修饰常量 ----指针常量
// int * const p = &a;
// 指针常量
// 特点：指针指向不可以修改,指针指向的值可以修改

// const 既修饰指针，又修饰常量
// const int * const p = &a;
//
// 特点：指针指向不可以修改,指针指向的值不 可以修改