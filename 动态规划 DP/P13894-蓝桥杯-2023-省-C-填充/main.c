#include<stdio.h>
int main()
{
    char arr[1000005];
    if (scanf("%1000000s", arr) != 1) return 0;

    int i=0;int ans=0;

    while(arr[i]!='\0'&&arr[i+1]!='\0')
    {
        if((arr[i]=='0'&&arr[i+1]=='1')||(arr[i]=='1'&&arr[i+1]=='0'))
        {
            i++;
        }
        else
        {
            ans++;
            i+=2;
        }
    }
    printf("%d",ans);
    return 0;
}
