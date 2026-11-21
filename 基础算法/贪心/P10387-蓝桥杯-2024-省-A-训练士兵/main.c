#include<stdio.h>

long long sumP[1000005];

int main()
{
    int n;
    long long S;

    scanf("%d %lld",&n,&S);

    int maxC=0;
    long long total=0;

    for (int i=0;i<n;i++)
    {
        long long p;
        int c;

        scanf("%lld %d",&p,&c);

        sumP[c]+=p;
        total+=p;

        if(c>maxC)
        {
            maxC=c;
        }
    }

    long long ans=0;

    for(int k=1;k<=maxC;k++)
    {
        if(total<S)
        {
            ans+=total;
        }
        else
        {
            ans+=S;
        }

        total-=sumP[k];
    }

    printf("%lld\n",ans);

    return 0;
}
