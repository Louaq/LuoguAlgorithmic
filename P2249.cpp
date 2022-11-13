//
// Created by YangYang on 2022/11/13.
//
#include<iostream>
using namespace std;
int n,m,a[1000000];
int brinary(int target)//二分法
{
    int left=1,right=n,real=0;
    while(left<=right)
    {
        int mid=(right-left)/2+left;
        if(a[mid]<target)
        {
            left=mid+1;
        }
        else if(a[mid]>target)
        {
            right=mid-1;
        }
        else
        {
            real=mid;
            //继续向左找
            right=mid-1;
        }
    }
    if(real!=0)
    {
        return real;
    }
    return -1;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=m;i++)
    {
        int target;
        cin>>target;
        cout<<brinary(target)<<" ";
    }

    return 0;
}