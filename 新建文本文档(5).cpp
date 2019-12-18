#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
    int x;
    cout<<"请输入一个整数:";
    cin>>x;
    if(x%3==0&&x%5==0)
    {
        cout<<"输入的x可以被3和5同时整除";
    }
    else
    {
        cout<<"输入的x不能被3和5同时整除";
    }
    return 0;
}
