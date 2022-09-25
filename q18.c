#include <stdio.h>
int main (int argc, char *argv[]) {
int i,j;
 
for (i=1;i<=9;i++)
{
    for (j=1;j<=9;j++)
    {
        if ((i==4 || i==6) && (j>=2 && j<=8) || (i==3 || i==7) && (j>=3 && j<=7) || (i==2 || i==8) && (j>=4 && j<=6) || (i==1 || i==9) && (j==5) || (i==5 && j<=9))
        printf("*");

        else
        printf(" ");
    }
    printf("\n");
}
    return 0;
}