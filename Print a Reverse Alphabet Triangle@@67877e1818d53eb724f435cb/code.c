#include <stdio.h>
int main()
{int N;
scanf("%d",&N);
int i;
char j='A';
for(i=0;i<=N;i++)
{for(j='A'+N-i;j>='A';j--)
{printf("%c",j);}
printf("\n");}
}