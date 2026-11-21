#include<stdio.h>
int main()
{
    int n,m;
    int cost=0;
    scanf("%d %d",&n,&m);
    int p[m];
    int a[m];
    int temp;
    int i,j;
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&p[i],&a[i]);
    }
    for(i=0;i<m-1;i++)
    {
        for(j=0;j<m-1-i;j++)
        {
            if(p[j]>p[j+1])
            {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;


                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        if(a[i]>n)
