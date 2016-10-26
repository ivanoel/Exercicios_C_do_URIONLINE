#include<stdio.h>
int main(void){
    float a,b,c,x,r;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%f %f %f",&a,&b,&c);
        x=a*2.0 + b*3.0 + c*5.0;
        r=x/10.0;
        printf("%.1f\n",r);
    }
    return 0;
}

