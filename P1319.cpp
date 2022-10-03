//
// Created by YangYang on 2022/9/20.
//


#include <iostream>
#include <vector>

using namespace std;

int main() {
    int k[201];
    int n, m=0;
    cin>>n;
    for(int i=1;i<=2*n;i++){
        cin>>k[i];
    }

    for(int i = 1;i<=2*n;i++){
        if(i%2!=0){
            //输出0
            for(int j=1;j<=k[i];j++){
                cout<<0;
                m++;
                if(m%n==0) cout<<endl;
            }
        } else{
            //输出1
            for(int j=1;j<=k[i];j++){
                cout<<1;
                m++;
                if(m%n==0) cout<<endl;
            }
        }
    }

    return 0;
}
