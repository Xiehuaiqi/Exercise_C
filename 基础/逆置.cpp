//
// Created by zx on 19-7-15.
//
#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,3,2,5,4};
    int temp = 0;
    cout << "数组为：" << endl;
    for (int i = 0;i < 5; i++){
//        cout << arr[i] << endl;
        temp = arr[i];
        arr[i] = arr[4-i];
        arr[4-i] = temp;
        if(i>=4-i){
            for(int j=0;j<5;j++){
                cout << arr[j] << endl;
                cout << len(arr) <<endl;
            }
            break;
        }
    }

}
