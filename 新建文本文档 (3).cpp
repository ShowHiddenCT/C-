#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
	double r=1.5;
	double h=3;
	double a,b,c,d,e;
	a=2*3.14;
	a=a*r;
	cout<<"Բ���ܳ�:"<<a<<endl;
	b= pow(r,2);
	b=b*3.14;
	cout<<"Բ�����:"<<b<<endl;
	c=pow(r,2);
	c=4*c;
	c=3.14*c;
	cout<<"Բ������:"<<c<<endl;
	d=b*h;
	cout<<"Բ�����:"<<d<<endl;
	e=pow(r,3);
	e=3.14*e;
	e=(4/3)*e;
	cout<<"Բ�����:"<<e<<endl;
	return 0;
}
