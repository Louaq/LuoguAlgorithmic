//
// Created by YangYang on 2022/9/15.
//
/*
 *
 * peter的烟
 *
 * */

#include <iostream>

using namespace std;

int main() {

    int n=0,k=0;
    int exchange=0;
    cin >> n >> k;
    int temp = n;
    //k（k>1k>1）个烟蒂可以换一个新的烟，那么 Peter 最终能吸到多少根烟呢？
    while(n>=k){
        exchange+=n/k;        //3    4
        n=n/k+n%k;            //4    2
    }
    cout<<exchange+temp;


    return 0;
}
