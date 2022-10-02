#include<iostream>
using namespace std;
int getSum(int k){
    double sum=0.0;
    for(int i=1;i<=1000000;i++)
    {
        sum+=1.0/i;
        if(sum>k*1.0)
            return i;
    }

}
int main()
{

    //级数求和
    int k;
    cin>>k;
    cout<<getSum(k)<<endl;

    return 0;

}
