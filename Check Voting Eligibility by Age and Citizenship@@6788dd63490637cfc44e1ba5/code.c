#include <stdio.h>

int main() {
    int age;
    scanf("%d",&age);
    int a;
    scanf("%d",&a);
    if(age>=18 && a==1)
    {printf("Eligible");}
    else
    {printf("Not Eligible");}
    return 0;
}