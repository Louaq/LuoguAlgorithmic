//
// Created by YangYang on 2022/9/14.
//


#include <iostream>

using namespace std;

int main() {
    int a[12] = {};
    int save = 0, bank = 0;  // save:放在妈妈的钱，bank:自己手上的钱
    for (int &i: a) {
        cin >> i;
    }
    for(int j =0;j<12;j++){
        bank+=300;
        //如果余额不足
        if(bank<a[j]){
            cout<<"-"<<j+1;
            return 0;
        }
        //余额足够
        bank-=a[j];
        save+=bank/100;
        bank%=100;

    }
    //输出
    cout<<bank+save*120;

    return 0;
}
