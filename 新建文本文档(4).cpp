#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
    double x,y;
    cout<<"������һ��xֵ:\n";
    cin>>x;
    if(x<=-1)
    {
        y=1-x;
    }
    else if(x>-1&&x<5)
    {
        y=2*x-1;
    }
    else
    {
        y=4*x;
    }
    cout<<"��Ӧy��ֵΪ:"<<y;
    return 0;
}
