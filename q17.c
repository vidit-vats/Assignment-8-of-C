#include <stdio.h>
int main (int argc, char *argv[]) {
 
 int i,j;

 for (i=1;i<=5;i++)
 {
    for (j=1;j<=9;j++)
    {
        if (i==j || (i==1 && j<=9) || (i==2 && j==8) || (i==3 && j==7) || (i==4 && j==6))
        printf("*");

        else
        printf(" ");
    }
    printf("\n");
 }
    return 0;
}