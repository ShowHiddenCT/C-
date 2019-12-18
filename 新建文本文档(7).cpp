#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
    cout<<"50-100中可以被9整除的数:\n";
    for(int a=50;a<=100;a++)
    {
        if(a%9==0)
        {
            cout<<"\t\t\t\t"<<a<<"\n";
        }
    }
    return 0;
}
