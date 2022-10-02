//
// Created by YangYang on 2022/9/15.
//


#include <iostream>

using namespace std;

int main() {

    int n=0;
    int a[10000]={};
    int count=0;
    cin >> n;
    //输入
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        //交换相邻的两个数，从小到大排序，输出交换次数
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                count++;
            }
        }

    }
    cout << count;
    return 0;
}
