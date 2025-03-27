#include <stdio.h>
int main() 
{
    int N,i,j,k;
    scanf("%d",&N);
    for (i=1;i<=N/2;i++)
    {
        for(j=1;j<N/2-i;j++)
        {printf(" ");}
        for(k=1;k<=(2*i)-1;k+=1)
        {printf("*");}
        printf("\n");
    }
    for (i=1;i<=N/2;i++)
    {for(j=1;j<=i;j++)
        {printf(" ");}
        for(k=1;k<=(2*i)-1;k+=1)
        {printf("*");}
        printf("\n");
       
    }
    
    return 0;
}


