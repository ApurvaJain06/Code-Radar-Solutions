#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d=a+b+c;
    float avg=(d/3)+(d%3);
    printf("Average: %.2f",avg);

    return 0;
}