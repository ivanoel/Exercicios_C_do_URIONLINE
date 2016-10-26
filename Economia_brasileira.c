#include<stdio.h>
int main(){
float q, v, r=0;
int i;
scanf("%f",&q);
for(i=0;i<q;i++){
scanf("%f",&v);
r=r+v;


}
if (r>= q/2){
printf("N\n");

}else{
printf("Y\n");

}
    
}
