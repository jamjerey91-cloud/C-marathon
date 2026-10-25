#include <stdio.h>

int main() {
    int amount;

    printf("Enter total amount in FCFA (multiple of 5): ");
    scanf("%d", &amount);

    int c500 = amount / 500;
    amount %= 500;

    int c100 = amount / 100;
    amount %= 100;

    int c50 = amount / 50;
    amount %= 50;

    int c25 = amount / 25;
    amount %= 25;

    int c10 = amount / 10;
    amount %= 10;

    int c5 = amount / 5;

    printf("Denominations needed:\n");
    printf("- 500 FCFA: %d\n", c500);
    printf("- 100 FCFA: %d\n", c100);
    printf("-  50 FCFA: %d\n", c50);
    printf("-  25 FCFA: %d\n", c25);
    printf("-  10 FCFA: %d\n", c10);
    printf("-   5 FCFA: %d\n", c5);

    return 0;
}
