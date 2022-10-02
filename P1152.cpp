//
// Created by YangYang on 2022/9/16.
//


#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;



int main() {
    long n = 0;
    cin>>n;
    int a[100000],b[100000];
    for (int i = 1; i <= n; i++) {
        cin>>a[i];
    }
    for (int j = 1; j < n; j++) {
        b[j]=abs(a[j]-a[j+1]);    //计算绝对值
    }
    //排序
    sort(b+1,b+n);
    for(int k=1;k<n;k++){
        if(b[k]!=k){
            cout<<"Not jolly"<<endl;
            return 0;
        }
    }
    cout<<"Jolly"<<endl;

    return 0;
}
