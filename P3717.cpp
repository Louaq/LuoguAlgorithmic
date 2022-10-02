//
// Created by YangYang on 2022/10/2.
//


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n = 0, m = 0, r = 0,count=0;
    int x,y;
    cin >> n >> m >> r;
    int a[1005][1005] = {0};
    for (int i = 1; i <= m; i++) {
        cin>>x>>y;
        //遍历
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                double distance = sqrt((x-i)*(x-i)+(y-j)*(y-j));
                if(distance<=r){
                    a[i][j]=1;
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==1){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
