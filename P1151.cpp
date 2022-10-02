//
// Created by YangYang on 2022/9/15.
//


#include <iostream>

using namespace std;

void fetResult(int k,int flag){
    for(long i = 10000;i<=30000;i++){
        int sub1=i/100;
        int sub2=i/10%1000;
        int sub3=i%1000;
        if(sub1%k==0&&sub2%k==0&&sub3%k==0){
            cout<<i<<endl;
            flag=1;

        }

    }
    if (flag == 0) {
        cout << "No";
    }

}

int main() {
    int k = 0;
    int flag = 0;
    cin >> k;
    fetResult(k,flag);



    return 0;
}
