#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
    double x,y;
    cout<<"请输入一个x值:\n";
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
    cout<<"相应y的值为:"<<y;
    return 0;
}
