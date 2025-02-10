#include <stdio.h>
int main() 
{
    int N,i,j,k;
    scanf("%d",&N);
    for (i=0;i<=N-1;i++)
    {
        for(j=N-1;j>=N-1-i;j--)
        {printf(" ");}
        for(k=1;k<=2*i+1;k+=2)
        {printf("*");}
        printf("\n");
    }
    return 0;
}



