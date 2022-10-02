//
// Created by YangYang on 2022/9/18.
//


#include <iostream>

using namespace std;

int main() {
    int L=0,R=0;
    int count = 0;
    cin>>L>>R;
    for(int i = L;i<=R;i++){
        //判断数字中是否有2
        int temp = i;
        while(temp!=0){
            if(temp%10==2){
                count++;
            }
            temp/=10;
        }


    }
    cout<<count<<endl;

    return 0;
}
