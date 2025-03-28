#include <stdio.h>
int main()
{int N;
scanf("%d",&N);
int i;
char j='A';
for(i=N;i>1;i--)
{for(j='A';j='A'+i;j++)
{printf("%c ",j);}
printf("\n");}
}