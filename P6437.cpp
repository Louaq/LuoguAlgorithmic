//
// Created by YangYang on 2022/10/2.
//


#include <iostream>

using namespace std;

int main() {
    int n=0,m=0;
    int a[10000]={};
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //找出三个数的和最接近m的数，输出这三个数的和
    int sum=0;
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                sum=a[i]+a[j]+a[k];
                if(sum<=m&&sum>max){
                    max=sum;
                }
            }
        }
    }
    cout<<max;



    return 0;
}
