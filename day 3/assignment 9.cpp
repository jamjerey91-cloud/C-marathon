#include <stdio.h>

int main() {
    double a, b, c;
    printf("Enter three side lengths: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The given sides can form a valid triangle.\n");
    } else {
        printf("The given sides cannot form a valid triangle.\n");
    }

    return 0;
}
