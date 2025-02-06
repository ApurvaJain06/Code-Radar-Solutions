#include <stdio.h>
int main() 
{
    int N,i,j;
    scanf("%d",&N);
    for (i=0;i<=N-1;i++)
    {
        for(j=N-1;j>=0;j--)
        {printf(" ");}
        for(j=1;j<=2*(N-1)+1;j+=2)
        {printf("*");}
        printf("\n");
    }
    return 0;
}



