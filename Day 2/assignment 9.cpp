#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers separated by a space: ");
    scanf("%d %d", &a, &b);

    // Relational operators return 1 for true and 0 for false in C
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);
    printf("%d < %d  : %d\n", a, b, a < b);
    printf("%d > %d  : %d\n", a, b, a > b);
    printf("%d <= %d : %d\n", a, b, a <= b);
    printf("%d >= %d : %d\n", a, b, a >= b);

    return 0;
}
