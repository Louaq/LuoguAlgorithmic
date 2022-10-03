//
// Created by YangYang on 2022/10/2.
//


#include <iostream>

using namespace std;

int main() {

    int N = 0, M = 0, Squ=0, Rec=0;
    cin>>N>>M;  // 2  3
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if(i==j){
                Squ+=(N-i)*(M-j);  //判断正方形
            }
            else{
                Rec+=(N-i)*(M-j);  //判断长方形
            }
        }
    }
    cout<<Squ<<" "<<Rec;



    return 0;
}
