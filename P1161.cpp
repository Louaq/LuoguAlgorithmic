//
// Created by YangYang on 2022/9/18.
//


#include <iostream>
#include <cmath>
#include <algorithm>
# define MAX 1000000

using namespace std;

int main() {
    int n = 0;
    //灯的状态   0：关  1：开
    cin>>n;
    long double a[n][2];
    //初始状态灯是关的
    int b[MAX]={0};
    for (int i = 0; i < n; i++) {
        cin>>a[i][0]>>a[i][1];
    }
    //计算整数部分
    for (int j = 0; j < n; j++) {
        for(int k=1;k<=a[j][1];k++){
            double temp = floor(a[j][0]*k);
            //把对应的灯的状态改变
            if(b[(int)temp]==0){
                b[(int)temp]=1;
            } else{
                b[(int)temp]=0;
            }


        }

    }
    //判断那一盏灯是亮的
    for(int l=0;l<MAX;l++){
        if(b[l]==1){
            cout<<l<<endl;
            return 0;
        }
    }

    return 0;
}
