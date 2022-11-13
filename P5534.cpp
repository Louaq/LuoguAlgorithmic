//
// Created by YangYang on 2022/11/13.
//
#include <iostream>

using namespace std;

#include <algorithm>

int main() {
    long a1, a2, n, sum = 0;
    cin >> a1 >> a2 >> n;
    int d = a2 - a1;
/*    for(int i=0;i<n;i++){
        sum=sum+a1;
        a1=a1+d;
    }*/
    sum = n * a1 + n * (n - 1) * d / 2;
    cout << sum << endl;


    return 0;
}
