#include <stdio.h>
int main (int argc, char *argv[]) {
    int i,j,k;
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=9;j++)
        {
           if (j==i)
           {
            for (k=i;k<=10-i;k++)
            printf("*");
           }

           else 
           printf(" ");

        }
        printf("\n");
    }

    return 0;
}
