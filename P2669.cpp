//
// Created by YangYang on 2022/11/13.
//
#include <iostream>
#include <cmath>
using namespace std;
#include <algorithm>
int main(){
    int n;
    long sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+floor(sqrt(2*i)+0.5);

    }
    cout<<sum<<endl;
    return 0;
}


