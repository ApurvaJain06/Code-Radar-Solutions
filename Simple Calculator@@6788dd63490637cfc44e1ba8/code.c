#include <stdio.h>
int main()
{int a,b,d;
scanf("%d",&a,&b);
char c;
scanf("%c",&c);
if(c=='+')
{d=a+b;
printf("%d",d);}
else if(c=='-')
{d=a-b;
printf("%d",d);}
else if(c=='*')
{d=a*b;
printf("%d",d);}
else if(c=='/')
{d=a/b;
printf("%d",d);}
else
{printf("Error");}
return 0;
}