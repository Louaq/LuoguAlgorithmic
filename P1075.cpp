//
// Created by YangYang on 2022/9/14.
//


#include <iostream>

using namespace std;

int getResult(int n){
    //质因数分解，找出最大的质因数
    for(int i=2;i<n;i++){
        if(n % i == 0){
            return n/i;
        }

    }

}

int main() {
    int n=0;
    cin >> n;
    cout<<getResult(n)<<endl;
    return 0;
}
