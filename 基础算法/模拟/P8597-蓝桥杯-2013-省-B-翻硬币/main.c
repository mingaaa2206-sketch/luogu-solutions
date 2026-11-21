#include<stdio.h>
int main()
{
    char a[1000];
    char b[1000];
    int count=0;
    scanf("%s",a);
    scanf("%s",b);
    for(int i=0;a[i+1]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            if(a[i]=='o')
            {
                a[i]='*';
            }
            else
            {
                a[i]='o';
            }

            if(a[i+1]=='o')
            {
                a[i+1]='*';
            }
            else
            {
                a[i+1]='o';
            }
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
