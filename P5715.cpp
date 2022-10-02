//
// Created by YangYang on 2022/10/2.
//


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    //对三位整数进行从小到大的排序
    int a[3]={};
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    /*for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i]<a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }*/
    sort(a,a+3);
    for(int i=0;i<3;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
