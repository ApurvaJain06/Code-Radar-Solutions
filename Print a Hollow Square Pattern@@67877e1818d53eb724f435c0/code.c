// Your code here...
#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i,j;
    for(i=1;i<=N;i++)
    {printf("*\n");}
    for(i=2;i<=N-1;i++)
    {printf("*");
    for(j=1;j<=N-2;j++)
    {printf(" ");}
    printf("*");
    printf("\n");
    }
    for(i=1;i<=N;i++)
    {printf("*");}
}