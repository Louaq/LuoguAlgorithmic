//
// Created by YangYang on 2022/9/15.
//


#include <iostream>

using namespace std;

void getResult(int n, int a[]){
    for (int i = 0; i < n; i++) {
        //翻转除第i+1个数以外的数
        for (int j = 0; j < n; j++) {
            if (j != i) {
                if (a[j] == 0) {
                    a[j] = 1;
                } else {
                    a[j] = 0;
                }
            }

        }
        //输出
        for (int k = 0; k < n; k++) {
            cout << a[k];
        }
        cout<<endl;
    }



}

int main() {

    int n = 0;
    int a[100]={};
    cin >> n;
    for (int i = 0; i < n; i++) {
        a[i]=0;
    }
    cout<<n<<endl;
    getResult(n,a);

    return 0;
}
