#include <stdio.h>
int main() {
    int cp;
    int sp;
    scanf("%d%d",&cp,&sp);
    if(cp>=sp)
    {printf("Loss");}
    else if(cp<=sp)
    {printf("Profit");}
    else
    {printf("No Profit No Loss")}
    return 0;
}printf("%s", welcome());