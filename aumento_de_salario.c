//Aluno:
//Salario; Reajuste; Percentual...
//Algoritmo C
#include <stdio.h>
int main(){
float salario;
float reajuste;
float aumento;
//printf("Informe o salario:\n");
scanf("%f",&salario);

if(salario>0 && salario<=400.00){
reajuste = salario * 0.15;
aumento = salario + reajuste;
printf("Novo salario: %.2f\n",aumento);
printf("Reajuste ganho: %.2f\n",reajuste);
printf("Em percentual: 15 %\n");


}else if(salario>400.01 && salario<=800.00){
reajuste = salario * 0.12;
aumento = salario + reajuste;
printf("Novo salario: %.2f\n",aumento);
printf("Reajuste ganho: %.2f\n",reajuste);
printf("Em percentual: 12 %\n");

}else if(salario>800.01 && salario<=1200.00){
reajuste = salario * 0.10;
aumento = salario + reajuste;
printf("Novo salario: %.2f\n",aumento);
printf("Reajuste ganho: %.2f\n",reajuste);
printf("Em percentual: 10 %\n");

}else if(salario>=1200.01 && salario<=2000.00){
reajuste = salario * 7 / 100;
aumento = salario + reajuste;
printf("Novo salario: %.2f\n",aumento);
printf("Reajuste ganho: %.2f\n",reajuste);
printf("Em percentual: 7 %\n");
}
else {
(salario > 2000.00);
reajuste = salario * 4 /100;
aumento = salario + reajuste;
printf("Novo salario: %.2f\n",aumento);
printf("Reajuste ganho: %.2f\n",reajuste);
printf("Em percentual: 4 %\n");

}

    return 0;
}

