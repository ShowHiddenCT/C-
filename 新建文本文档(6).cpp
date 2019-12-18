#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
    double x;
    cout<<"请输入一个数:";
    cin>>x;
    switch((int)x)//让x转化成整形。
    {
    case 1:
        cout<<"+";
        break;
    case 2:
        cout<<"-";
        break;
    case 3:
        cout<<"*";
        break;
    case 4:
        cout<<"/";
        break;
    default:
        cout<<"error";
    }
    return 0;
}
