#include <stdio.h>

int main() {
    double a, b, c;
    printf("Enter three valid triangle side lengths: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Optional validation check
    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Error: These sides do not form a valid triangle.\n");
    } else if (a == b && b == c) {
        printf("Equilateral triangle (all sides are equal).\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles triangle (two sides are equal).\n");
    } else {
        printf("Scalene triangle (all sides are different).\n");
    }

    return 0;
}

