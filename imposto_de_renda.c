#include <stdio.h>

int main() {

    int sal;

    scanf("%d", &sal);

    if (sal <= 2000)
        printf("Isento\n");
    else
        if (sal <= 3000)
            printf("R$ %.2f\n", (sal-2000)*0.08);
        else
            if (sal <= 4500)
                printf("R$ %.2f\n", (1000*0.08) + (sal-3000)*0.18);
            else
                printf("R$ %.2f\n", (1000*0.08) + 1500*0.18 + (sal-4500)*0.28);



    return 0;

}
