#include<stdio.h>
#include<math.h>

double Num(int h,int r){
    double N=20000.0/(h*r*r*3.14);
    return N;
    
    }
int main(){
    int h;
    int r;
    scanf("%d %d",&h,&r);
    double N=Num(h,r);
    printf("%d", (int)ceil(N));
    return 0;
}
