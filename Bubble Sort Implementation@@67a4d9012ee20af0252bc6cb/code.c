#include <stdio.h>
int bubblesort(int n;int a[i])
{for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
    {if(a[i]>a[i+1])
    {temp= a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
    }}}
    
    return 0;}
int printArray()
{for(i=1;i<=n;i++)
    {printf("%d ",a[i]);}
    return;}
int main()
{   int n;
    scanf("%d",&n);
    int arr[n];
    int i,j,temp;
    for(int i=0;i<n;i++)
    {scanf("%d ",&arr[i]);}
    
    bubblesort(arr,n);
    printArray(arr,n);
    return 0;
}