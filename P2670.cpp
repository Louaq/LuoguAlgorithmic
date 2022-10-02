//
// Created by YangYang on 2022/10/2.
//


#include <iostream>

using namespace std;

int main() {

    //雷区的行数和列数
    int n=0,m=0;
    char a[1005][1005]={};
    char b[1005][1005]={};
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    //判断地雷的个数
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]!='*'){
                //判断周围是否有地雷
                if(a[i-1][j-1]=='*'){
                    count++;
                }
                if(a[i-1][j]=='*'){
                    count++;
                }
                if(a[i-1][j+1]=='*'){
                    count++;
                }
                if(a[i][j-1]=='*'){
                    count++;
                }
                if(a[i][j+1]=='*'){
                    count++;
                }
                if(a[i+1][j-1]=='*'){
                    count++;
                }
                if(a[i+1][j]=='*'){
                    count++;
                }
                if(a[i+1][j+1]=='*'){
                    count++;
                }
                b[i][j]=count+'0';
                count=0;
            }
            else{
                b[i][j]='*';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<b[i][j];
        }
        cout<<endl;
    }
    return 0;
}
