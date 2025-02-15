#include <stdio.h>

int main() {
    int num, shift;
    
    scanf("%d %d", &num, &shift);// Performing bitwise left shift operation and printing the result
    printf("%d\n", num << shift);
    
    return 0;
}
