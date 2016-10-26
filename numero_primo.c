//Aluno:
//Numero Primo
//Algoritmo C
#include<stdio.h>
#include<stdlib.h>
int main(void){
int N, i=0, X, cont=0, j=1;
scanf("%d", &N);
if(N>=1 && N<=100){
for(i=1;i<=N;i++){
scanf("%d", &X);
if(X>=1 && X<=10^7){
for(j=1;j<=X;j++){
if(X%j==0){
cont++;
}
 }
if(cont==2){
printf("%d eh primo\n", X);
cont=0;
}
else{
printf("%d nao eh primo\n", X);
cont=0;
}
 }
  }
   }
    }

