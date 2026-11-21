#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
    int a;
    scanf("%d",&a);

    int x=1,y=1;
    int z;
    if(a==1||a==2)
    {
    printf("1\n");
    }
    if(a>=3)
    {
    for(int i=3;i<=a;i++){
        z=x+y;
        x=y;
        y=z;
    }
      printf("%d\n",y); 
    }
    }
    return 0;
}
