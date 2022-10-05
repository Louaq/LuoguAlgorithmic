/*
 * 压缩问题
 */


#include<iostream>

using namespace std;

int main() {
    int n = 0;
    int a[250];
    cin >> n;
    for (int i = 1; i <= 2 * n; i++) {
        cin >> a[i];
    }
    //交替输出0和1
    int count = 0;
    for (int i = 1; i <= 2*n; i++) {
        if (i % 2 == 0) {
            for (int j = 1; j <= a[i]; j++) {
                count++;
                cout << 1;
                if (count == n) {
                    cout << endl;
                    count = 0;
                }
            }
        } else {
            for (int j = 1; j <= a[i]; j++) {
                count++;
                cout << 0;
                if (count == n) {
                    cout << endl;
                    count = 0;
                }
            }
        }


    }


}