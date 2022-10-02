//
// Created by YangYang on 2022/9/19.
//


#include <iostream>

using namespace std;
//判断是否是质数
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main() {
    int N = 0;
    cin>>N;
    for(int i = 0;i<1;i++){
        for(int j=4; j<=N;j++){
            int k=2;
            while(j%2==0){
                if(isPrime(k)&& isPrime(j-k)){
                    cout<<j<<"="<<k<<"+"<<j-k<<endl;
                    break;
                }
                k++;

            }

        }

    }

    return 0;
}
