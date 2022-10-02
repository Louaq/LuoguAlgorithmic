//
// Created by YangYang on 2022/9/19.
// 注意特判0
//


#include <iostream>

using namespace std;

int main() {
    long long N = 0;
    cin >> N;
    if (N > 0) {
        //反转
        long long temp = 0;
        while (N != 0) {
            temp = temp * 10 + N % 10;
            N /= 10;
        }
        cout << temp << endl;
    } else if (N < 0) {
        N = -N;
        long long temp = 0;
        while (N != 0) {
            temp = temp * 10 + N % 10;
            N /= 10;
        }
        cout << -temp << endl;
    } else
        cout << 0 << endl;


    return 0;
}
