//
// Created by YangYang on 2022/10/2.
//


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n = 0;
    int a[1000]={};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    // 从小到大排序
    sort(a, a + n);
    cout<<a[0];





    return 0;
}
