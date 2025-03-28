#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i;
    char ch='A';
    for (i=1;i<=N;i++)
    {for(ch='A';ch<'A'+i;ch++)
    {printf("%c ",ch);
    }
    printf("\n");}

}