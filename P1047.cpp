//
// Created by YangYang on 2022/9/13.
//


#include <iostream>

using namespace std;


int main() {
    //马路长度和区域数目
    int l, m;
    cin >> l >> m;
    int a[l+1];
    //初始化数组为1
    for (int i = 0; i <= l; i++) {
        a[i] = 1;
    }
    //区域
    int x, y;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        for (int j = x; j <= y; j++) {
            a[j] = 0;
        }
    }
    int sum = 0;
    for (int i = 0; i <= l; i++) {
        if (a[i] == 1) {
            sum++;
        }
    }
    cout << sum << endl;


    return 0;
}
