#include <stdio.h>
 int main () {
     int i,n,m;
     scanf("%d", &n);
      for (i=2; i<=n;i=i+2){
            m = pow (i,2);
    printf("%d^2 = %d\n", i, m);
      }
return 0;
 }

