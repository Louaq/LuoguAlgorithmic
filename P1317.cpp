//
// Created by YangYang on 2022/9/20.
//


#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int a[10000] = {};
    int count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 2; j < n - 1; j++) {
        if (a[j - 1] > a[j]) {
            while(a[j] >= a[j + 1] && j<n-1) {
                j++;
            }
            if(j!=n-1){
                count++;
            }


        }

    }
    cout << count << endl;

    return 0;
}
