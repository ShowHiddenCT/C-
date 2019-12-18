#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
    int a;
    cout<<"请输入所需行数:";
    cin>>a;
    for(int b=1;b<=a;b++)
    {
        for(int c=1;c<=b;c++)
        {
            if(c==b)
            {
                cout<<"*\n";
                break;
            }
            else
            {
                cout<<"*";
            }
        }
    }
    return 0;
}
