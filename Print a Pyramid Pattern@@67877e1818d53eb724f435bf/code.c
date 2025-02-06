#include <stdio.h>
int main() 
{
    int N,i,j;
    scanf("%d",&N);
    for (i=0;i<=N-1;i++)
    {for(j=N-i;j>=0;j--)
    {printf(" ");}
    for(j=2*i+1;;i++)
    {printf("*");}
    printf("\n");}
    return 0;
}



