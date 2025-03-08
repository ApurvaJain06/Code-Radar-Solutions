// Your code here...
int a,b,c;
scanf("%d %d %d",&a,&b,&c);

if(a==b && b==c);
{printf("Equilateral");}

// else if((a==b && b!=c )|| (a==c && c!=b) || (c==b && b!=a))
// {printf("Isosceles");}

else if(a!=b && b!=c && c!=a) 
{printf("Scalene");}
else
{printf("Isosceles");}