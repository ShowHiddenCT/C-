#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
    double x;
    cout<<"������һ����:";
    cin>>x;
    switch((int)x)//��xת�������Ρ�
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
