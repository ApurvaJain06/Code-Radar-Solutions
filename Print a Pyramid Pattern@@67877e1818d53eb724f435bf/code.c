#include <stdio.h>
int main() 
{
    int N,i,j,k;
    scanf("%d",&N);
    for (i=1;i<=N;i++)
    {
        for(j=1;j<=N-i-1;j++)
        {printf(" ");}
        for(k=1;k<=(2*i)-1;k+=2)
        {printf("*");}
        printf("\n");
    }
    return 0;
}


