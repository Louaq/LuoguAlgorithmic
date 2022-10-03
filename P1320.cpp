//
// Created by YangYang on 2022/10/3.
//


#include <iostream>
#include <algorithm>


using namespace std;

int main() {
    int a[200][200];
    int count1 = 0, count2=0, m=0;
    for (int i = 0; i < 200; i++) {
        for (int j = 0; j < 200; j++) {
            cin>>a[i][j];
        }
    }
    //判断二维数组中连续的0和1的个数
    for (int i = 0; i < 200; i++) {
        for (int j = 0; j < 200; j++) {

            if(a[i][j]==0){
                while(a[i][j]==0){
                    count1++;
                }
                cout<<count1<<" ";
            }


            if(a[i][j]==1){
                while(a[i][j]==1){
                    count2++;
                }
                cout<<count2<<" ";
            }

        }
    }


    return 0;
}
