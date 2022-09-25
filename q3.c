#include <stdio.h>

int main (int argc, char *argv[]) {

int i,j;

for (i=1;i<=5;i++)
{
    for (j=1;j<=6-i;j++)
    {
        if (j<=6-i)
        printf("*");

        else
        printf(" ");
    }
    printf("\n");
}
    return 0;
}