#include <stdio.h>
int main (int argc, char *argv[]) {
    int i,j,z;
    for (i=1;i<=4;i++)
    {
        z=1;
      
        for (j=1;j<=7;j++)
        {
            if (j>=5-i && j<=3+i)
            {
                 printf("%d",z);

                 if(j<4)
                 z++;

                 else
                 z--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}