#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, area;
        scanf("%f %f %f",&a,&b,&c);
    if(a<(b+c) && b<(a+c) && c<(a+b)){
        printf("Perimetro = %.1f\n",a+b+c);
  }
    else{
        area = ((a+b)*c)/2;
        printf("Area = %.1f\n",area);
 }
    return 0;
}
