#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
//cout<<x<<y<<endl;
};
int  main()
{
    int a,b;
    a=10;
    b=12;
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;

}