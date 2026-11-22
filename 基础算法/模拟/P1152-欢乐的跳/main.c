#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[1005];
    int n;
    scanf("%d",&n);
    int i,j;
    int m[1005];
    for(i=1;i<=n-1;i++)
    {
        m[i]=i;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
        
    }
    for(i = 0; i < n - 1; i++)
    {
        int t = abs(arr[i] - arr[i + 1]);


        for(j = 1; j <= n - 1; j++)
        {
            if(t == m[j])
            {
                m[j] = 0;
                break;
            }
        }
    }
    for(i=1;i<=n-1;i++)
    {
        if(m[i]!=0)
    {
        printf("Not jolly");
            return 0;
    }
        
    }
      printf("Jolly");  
    return 0;
}
