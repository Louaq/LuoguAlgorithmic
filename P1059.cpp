//
// Created by YangYang on 2022/9/13.
//


#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //排序
    sort(a, a + n);
    //去重
    int b[n];
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != a[i + 1]) {
            b[j] = a[i];
            j++;
        }
    }
    //输出b的长度和数值
    cout << j << endl;
    for (int i = 0; i < j; i++) {
        cout << b[i] << " ";
    }

    return 0;
}
