#include <stdio.h>

int main(){
int N = N * (N-1) * (N-2) * (N-3) * (N-4) * (N-5) * 1;
scanf("%d",&N);
int res = 1;
for( ;N>=1;--N ){
res *= N;
}
printf("%d\n",res);

return 0;



}
