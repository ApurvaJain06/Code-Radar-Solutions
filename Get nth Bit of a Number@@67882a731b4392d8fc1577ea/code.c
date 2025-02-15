#include <stdio.h>

int get_nth_bit(int number, int position) {
    return (number >> position) & 1;
}

int main() {
    int number, position;
    scanf("%d %d", &number, &position);
    printf("%d\n", get_nth_bit(number, position));
    return 0;
}
