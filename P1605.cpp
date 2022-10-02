//
// Created by YangYang on 2022/10/2.
//


#include <iostream>
using namespace std;

int n,m,s;
int tx,ty,sx,sy,fx,fy,t;
int a[1005][1005]={};

//深度优先搜索判断有多少种走法
void dfs(int x, int y){
    if(x<1||x>n){
        return;
    }
    if(y<1||y>m){
        return;
    }
    if(x==fx&&y==fy){
        s++;
        return;
    }
    if(a[x][y]==1 || a[x][y]==2){
        return;
    }
    a[x][y]=2;
    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x,y+1);
    dfs(x,y-1);
    a[x][y]=0;
}



int main() {
    cin>>n>>m>>t;
    cin>>sx>>sy>>fx>>fy;
    for(int i=0;i<t;i++){
        cin>>tx>>ty;
        a[tx][ty]=2;  //障碍物做标记
    }
    if(a[fx][fy]==2){  //终点有障碍
        cout<<0;
        return 0;
    }
    dfs(sx,sy);
    cout<<s;

    return 0;
}
