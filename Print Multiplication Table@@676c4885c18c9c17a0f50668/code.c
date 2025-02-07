#include <stdio.h>
int main() {
    int N,i;
    scanf("%d",&N);
    int t=N;
    for(i=1;i<=10;i++)
    {printf("%d * %d = %d\n",N,i,t);
    t+=N;
    }
}