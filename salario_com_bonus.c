//## Ivanoel Rodrigo
//## Salario com Bonus
//## Algoritmo C
#include <stdio.h>
#include <stdlib.h>

int main()
{
char a[300];
float b,c;
scanf("%s %f %f",&a,&b,&c);
printf("TOTAL = R$ %.2f\n",b+((c*0.15)*100)/100);
    return 0;
}

