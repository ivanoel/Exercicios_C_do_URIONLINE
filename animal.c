#include <stdio.h>

int main() {

    char cat1[15], cat2[15], cat3[15];

    scanf("%s", &cat1);
    scanf("%s", &cat2);
    scanf("%s", &cat3);

    if (strcmp(cat1,"vertebrado")==0)
        if (strcmp(cat2,"ave")==0)
            if (strcmp(cat3,"carnivoro")==0)
                printf("aguia\n");
            else
                printf("pomba\n");
        else
            if (strcmp(cat3,"onivoro")==0)
                printf("homem\n");
            else
                printf("vaca\n");
    else
        if (strcmp(cat2,"inseto")==0)
            if (strcmp(cat3,"hematofago")==0)
                printf("pulga\n");
            else
                printf("lagarta\n");
        else
            if (strcmp(cat3,"hematofago")==0)
                printf("sanguessuga\n");
            else
                printf("minhoca\n");


    return 0;

}
