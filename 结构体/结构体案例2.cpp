//
// Created by zx on 19-7-17.
//
#include <iostream>
#include <string>
using namespace std;

struct Hero{
    string name;
    int age;
    string sex;
};

void bubbleSort(struct Hero heroArray[],int len){
    for (int i = 0; i < len; i++){
        for (int j = 0; j < len-i-1; j++){
            if (heroArray[j].age > heroArray[j + 1].age){
                struct Hero temp = heroArray[j];
                heroArray[j] = heroArray[j + 1];
                heroArray[j + 1] = temp;
            }
        }
    }
}

void printHero(struct Hero heroArray[],int len){
    for (int i = 0; i < len; i++) {
        cout << "\t姓名： " << heroArray[i].name
             << " 年龄： " << heroArray[i].age
             << " 分数： " << heroArray[i].sex << endl;
    }
}

int main(){
    struct Hero heroArray[5] = {
        {"刘",23,"男"},
        {"关",22,"男"},
        {"张",21,"男"},
        {"赵",20,"男"},
        {"黄",30,"男"},
    };
    int len = sizeof(heroArray)/sizeof(heroArray[0]);

    cout << "排序前打印：" << endl;
    printHero(heroArray, len);
    bubbleSort(heroArray, len);

    cout << "排序前打印：" << endl;
    printHero(heroArray, len);

    return 0;
}
