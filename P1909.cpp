//
// Created by YangYang on 2022/11/13.
//
#include <iostream>
using namespace std;
#include <algorithm>
int getResult(int n,int a[][2], int b[]){
    for(int i=0;i<3;i++){
        //可以买几份
        int c1=n/a[i][0];
        if(n%a[i][0] !=0){
            c1++;
        }
        b[i]=c1*a[i][1];
    }
    sort(b,b+3);
    return b[0];

}




int main(){
    int n;
    int a[3][2]={};
    int b[]={};
    cin>>n;
    for(int i=0;i<3;i++){
        cin>>a[i][0]>>a[i][1];
    }
    cout<<getResult(n,a,b)<<endl;
    return 0;
}