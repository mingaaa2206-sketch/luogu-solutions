#include<iostream>
using namespace std;
int main()
{
    double sum=0;
    int k,n=0;
    cin>>k;
    while(sum<=k){
        n++;
        sum+=1.0/n;
        //如果写成 1 / n，两个整数相除可能发生整数除法，导致结果不正确
        
    }
    cout<<n;
    return 0;
        
         
}
