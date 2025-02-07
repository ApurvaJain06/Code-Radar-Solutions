#include <stdio.h>
int main() {
    char L;
    scanf("%c",&L);
    if(L=='R')
    {printf("Stop");
    }
    else if(L=='G')
    {printf("Go");
    }
    else if(L=='Y')
    {printf("Slow Down");
    }
    else
    {printf("Invalid input");}
    
    return 0;
}