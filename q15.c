#include <stdio.h>

int main (int argc, char *argv[]) {
 int i,j;

 for (i=1;i<=5;i++)
 {
    for (j=1;j<=5;j++)
    {
        if (j==5 || j==6-i || (j>=1 && j<=5 && i==5))
        printf("*");

        else
        printf(" ");
    }
    printf("\n");
 }
    return 0;
}