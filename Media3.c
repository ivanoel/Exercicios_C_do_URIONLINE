//## Ivanoel Rodrigo
//## Media 3
//## Algoritmo C
#include <stdio.h>

int main(){
float n1,n2,n3,n4,n5,med;
scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
med = (n1*2.0+n2*3.0+n3*4.0+n4*1.0)/10;
printf("Media: %.1f\n", med);

if(med>=7.0){
printf("Aluno aprovado.\n");
}
else if(med<5.0){
printf("Aluno reprovado.\n");
}
else if(med>=5.0 && med<=6.9){
printf("Aluno em exame.\n");
scanf("%f",&n5);
printf("Nota do exame: %.1f\n",n5);
printf("Aluno aprovado.\n");
med = (med+n5)/2;
printf("Media final: %.1f\n",med);

}
else if(med>=5.0){
printf("Aluno aprovado.\n");
printf("Media final: %.1f\n",med);
}
 else{
  printf("Aluno reprovado.\n");
  printf("Media final: %.1f\n",med);
}
return 0;
}











