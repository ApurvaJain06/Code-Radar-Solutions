#include <stdio.h>

int main() {
    int number, position;
    scanf("%d %d", &number, &position);
    int c=(number >> position) & 1;
    printf("%d\n",c);
    return 0;
}
