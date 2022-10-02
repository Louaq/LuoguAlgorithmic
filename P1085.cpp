//
// Created by YangYang on 2022/9/14.
//


#include <iostream>

using namespace std;

int main() {

    int a[7][2]={};
    int max = 0;
    int result = 0;
    for (auto & i : a) {
        cin>>i[0]>>i[1];
    }
    for(int i = 0; i < 7;i++){
        if(a[i][0]+a[i][1]>8 && a[i][0]+a[i][1]>max){
            result = i + 1;
            max = a[i][0]+a[i][1];
        }
    }
    cout << result << endl;
    return 0;
}
