#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cap=n;
    int total=n;
    while(cap>=3)
    {
        cap-=2;
        total+=1;
    }
    printf("%d",total);
    return 0;
}
