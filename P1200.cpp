//
// Created by YangYang on 2022/9/19.
//


#include <iostream>

using namespace std;

int main() {
    string str1;
    string str2;
    int temp1 = 1, temp2 = 1;
    int a[26]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
    cin>>str1;
    cin>>str2;
    for(int i = 0;i<str2.length(); i++){
        temp1 = temp1 *(a[str2[i] - 64-1]);

    }
    for(int j = 0;j<str1.length(); j++){
        temp2 = temp2 *(a[str1[j] - 64-1]);

    }
    if(temp1%47==temp2%47){
        cout<<"GO"<<endl;
    }else{
        cout<<"STAY"<<endl;
    }
    return 0;
}
