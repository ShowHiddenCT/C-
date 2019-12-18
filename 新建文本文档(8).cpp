#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
    cout<<"50-100ÖÐµÄËØÊý:\n";
    for(int x=50;x<=100;x++)
    {
        int i=0;
        for(int a=2;a<x;a++)
        {
            if(x%a==0)
            {
                i++;
                break;
            }
        }
        if(i==0)
        {
            cout<<x<<"\n";
        }

    }
}
