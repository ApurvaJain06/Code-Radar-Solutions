#include <stdio.h>
int main() {
    int N,i;
    char j='A';
    scanf("%d",&N);
    for (i=0;i<=N-1;i++)
    {for(j='A';j<='A'+i;j++)
    {printf("%c ",j);}
    printf("\n");}
    return 0;
}
 
