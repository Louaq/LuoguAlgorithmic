//
// Created by YangYang on 2022/9/18.
//


#include <stdio.h>

int main() {
    //判断一个数是否是素数
    int n=0;
    //从键盘输入一个数
    scanf("%d",&n);
    int flag=1;
    //循环判断
    for(int i=2;i<n;i++){
        if(n%i!=0){
            flag=1;
        } else{
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("Yes");
    } else{
        printf("No");
    }


    return 0;
}
