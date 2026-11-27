#include<iostream>
using namespace std;


int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int temp;
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
    }
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    // 求最大公约数
    int x = a;
    int y = c;


    while(y != 0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }


    // 约分
    a = a / x;
    c = c / x;


    cout<<a<<"/"<<c;
    return 0;
}
