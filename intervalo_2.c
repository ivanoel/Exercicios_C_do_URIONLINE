#include <stdio.h>
int main () {
      int i,n,cont=0,cont1=0,m;
      scanf("%d", &n);
       for (i=0; i<n; i++){
                scanf("%d", &m);
       if (m >= 10 && m <= 20){
            cont++;
       } else if (m < 10 || m >20){
            cont1++;
            }
            }
            printf("%d in\n", cont);
            printf("%d out\n", cont1);
       return 0; 
    
}
