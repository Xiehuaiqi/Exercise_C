//
// Created by zx on 19-7-17.
//

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

#define MAX 1000

struct Person{
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
};

struct Addressbooks{
    struct Person personArray[MAX];
    int m_Size;
};

void showMenu(){
    cout << "*************************" <<endl;
    cout << "*****  1、添加联系人  *****" <<endl;
    cout << "*****  2、显示联系人  *****" <<endl;
    cout << "*****  3、删除联系人  *****" <<endl;
    cout << "*****  4、查找联系人  *****" <<endl;
    cout << "*****  5、修改联系人  *****" <<endl;
    cout << "*****  6、清空联系人  *****" <<endl;
    cout << "*************************" <<endl;
}

void addPerson(Addressbooks * abs){
    if (abs->m_Size == MAX){
        cout << "通讯录已满，无法添加！" << endl;
        return ;
    } else{
        string name;
        cout << "请输入姓名： " << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;

        cout <<  abs->personArray[abs->m_Size].m_Name <<endl;
        cout << "请输入性别： " <<endl;
        cout << "1 --- 男" <<endl;
        cout << "2 --- 女" <<endl;
        int sex = 0;
        while(true){
            cin >> sex;
            if(sex == 1 || sex == 2){
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            else{
                cout << "请重新输入" <<endl;
            }
        }

    }
}

int main(){
    Addressbooks abs;
    int select = 0;

    while (true){
        showMenu();

        cin >> select;

        switch (select){
            case 1://添加联系人
                addPerson(&abs);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 0:
                cout << "欢迎下次使用" << endl;
                return 0;
        }
    }


}
