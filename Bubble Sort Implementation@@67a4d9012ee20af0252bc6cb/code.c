// Your code here...#include <stdio.h>
#include <stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=1;i<=n;i++)
    {scanf("%d ";&a[i]);}
    for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
    {if(a[i]>a[i+1])
    {temp= a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
    }}}
    for(i=1;i<=n;i++)
    {printf("%d ",a[i]);}


}