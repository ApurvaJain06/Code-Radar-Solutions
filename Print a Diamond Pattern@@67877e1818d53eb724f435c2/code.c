#include <stdio.h>
int main()
{   //upper
    int N;
    scanf("%d",&N);
    int i, j;
    for (i=1;i<=N;i++)
    {for(j=1;j<=N-i;j++)
    {printf(" ");}
    for(j=1;j<=2*i-1;j++)
    {printf("*");}
    printf("\n");}

    //lower
    for(i=N-1;i>=1;i--)
    {for(j=1;j<=N-i;j++)
    {printf(" ");}
    for(j=1;j<=2*i-1;j++)
    {printf("*");}
    printf("\n");
    }
}  