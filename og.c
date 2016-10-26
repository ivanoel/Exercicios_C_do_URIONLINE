#include<stdio.h>
int main() {
    int r, l;

    while( scanf("%d %d", &r, &l) && r >= 1 && l <= 5){
            printf("%d\n", r + l);
    }
    return 0;
}

