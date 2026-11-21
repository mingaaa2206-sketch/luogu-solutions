#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int result=0;
    while(n!=0)
    {
        int a=n%10;
        result=result*10+a;
        n=n/10;
    }
    printf("%d",result);
    return 0;
}
