#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
    int a;
    cout<<"��������������:";
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
