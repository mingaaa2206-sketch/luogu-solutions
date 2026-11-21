#include<stdio.h>
int main()
{
    int rec=0;
    int giv=0;
    int plan[12],give[12];
    for(int i=0;i<12;i++)
    {
        scanf("%d",&plan[i]);
        give[i]=(300+rec-plan[i])/100*100;
        rec=rec+300-plan[i]-give[i];
        if(rec<0)
        {
            printf("%d",-(i+1));
            return 0;
        }
        giv=giv+give[i];
    }
    printf("%d",giv*12/10+rec);
    return 0;   
}
