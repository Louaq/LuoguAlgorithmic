//
// Created by YangYang on 2022/9/13.
//


#include <iostream>

using namespace std;

int getCount(int height, const int a[10]){
    int count=0;
    for (int i = 0; i < 10; i++) {
        if(a[i]<=height+30)
            count++;

    }
    return count;

}

int main() {
    //定义10个整数
    int a[10];
    int height=0;
    for(int & i : a)
    {
        cin>>i;
    }
    cin>>height;
    cout<<getCount(height,a)<<endl;
    return 0;
}
