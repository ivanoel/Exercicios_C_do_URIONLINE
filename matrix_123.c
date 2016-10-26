#include<stdio.h>
int main()
{
    int a,i,j;
    while((scanf("%d",&a))!=EOF)
    {
        for(i=0 ; i<a ; i++)
        {
            for(j=0 ; j<a ; j++ )
            {

                if(i+j==a-1 && i==j) printf("2");
                else if(i==j) printf("1");
                else if (i + j == a - 1) printf("2");
                else printf("3");

            }
            printf("\n");
        }
    }
    return 0;

}
